#include<bits/stdc++.h>
using namespace std;
struct node 
{
    int data ;
    struct node* next;
}*head=NULL;
void create(int a[],int n)
{   
    struct node* last;
    head=new node;
    head->data=a[0];
    head->next=NULL;
    last=head; 
    for(int i=1;i<n;i++)
    {
    struct node* t= new node;
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
    }

}
void display()
{
    struct node* t=new node;
    t=head;
    while(t!=NULL)
   { cout<<t->data<<" ";
    t=t->next;}
}
void reverse()
{
    struct node *p ,*q,*r;
    p=head;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
}

int main()
{
    int n;
    cout<<"enter the number of elements\n";
    cin>>n;
    int a[n];
    cout<<"enter the elements \n";
    for (int i=0;i<n;i++)
     cin>>a[i];
     create(a,n);
    cout<<"\nelements in the linked lists are:\n";
    display();
    reverse();
    cout<<"\nthe reversed ll is:\n";
    display();
    return 0;
}
