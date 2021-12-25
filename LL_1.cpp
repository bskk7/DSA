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
void f(int x,int n)
{
    struct node* p;
    p=head;
    for(int i=1;i<n-1+x;i++)
    p=p->next;
    cout<<"nth node from the end of a Linked List is: "<<p->data;
}
int main()
{
    int n,x;
    cout<<"enter the number of elements\n";
    cin>>n;
    int a[n];
    cout<<"enter the elements \n";
    for (int i=0;i<n;i++)
     cin>>a[i];
     create(a,n);
    cout<<"\nelements in the linked lists are:\n";
    display();
    cout<<"\nenter n\n";
    cin>>x;
    f(x,n);
    return 0;
}
