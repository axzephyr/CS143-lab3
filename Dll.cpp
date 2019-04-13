#include<iostream>
using namespace std;
 class circle
 {
     public:
     int data;
     circle * next;
     circle * prev;
     circle()
     {
         next=NULL;
         prev=NULL;
     }
 };


 class lister
 {
 public:
    circle * head;
    circle * tail;
    lister()
    {
        head=NULL;
        tail=NULL;
    }

    void inserta(int value)
    {
        circle * current;
        circle * temp=new circle;
        if (head==NULL)
        {
            head=temp;
        }
        else
        {
            while(current->next != NULL)
            {
                current=current->next;
            }
            current->next=temp;
            temp->prev=current;
        }
    }


    int counter()
    {
        circle * current=head;
        int i=1;
        while(current->next != NULL)
        {
            i++;
            current=current->next;
        }
        return i;
    }


    void insertat(int value, int posit)
    {
        circle * temp;
        circle * counter=head;
        int a;
        temp->data=value;
        while(counter->next != NULL)
        {
            a++;
            counter=counter->next;
        }
        if(posit>a)
        {
            cout<<"the number at which you want your element doesn't exist!! "<<endl;
        }
        else
        {
            counter=head;
            a=1;
            while(posit-1>a)
            {
               counter=counter->next;
               a++;
            }
            temp->next=counter->next;
            (counter->next)->prev=temp;
            temp->prev=counter;
            counter->next=temp;
        }
    }
        void display()
        {
            circle * current=head;
            cout<<" the list is as follows "<<endl;
            while(current->next != NULL)
            {
                cout<<current->data<<" -> ";
            }
            cout<<endl;
        }

 };


 int main()
 {
     lister l1;
     l1.inserta(1);
     l1.inserta(2);
     l1.inserta(3);
     l1.display();
     l1.inserta(4);
     l1.inserta(5);
     l1.insertat(4,3);
     l1.insertat(8,9);
    return 0;
 }
