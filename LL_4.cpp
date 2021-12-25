#include<bits/stdc++.h>
using namespace std;
struct node 
{
    int data ;
    struct node* next;
}*head1=NULL,*head2=NULL;
void create(int a[],int n)
{   
    struct node* last;
    head1=new node;
    head1->data=a[0];
    head1->next=NULL;
    last=head1; 
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
    struct node* t;
    t=head1;
    while(t!=NULL)
   { cout<<t->data<<" ";
    t=t->next;}
}
void reverse()
{
    struct node *p ,*q,*r;
    p=head2;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head2=q;
}
void palindrome()
{   int flag=0;
    node*p1,*p2;
    p1=head1;
    p2=head2;
    while(p1!=NULL&&p2!=NULL)
    {
      if (p1->data!=p2->data)
      flag=1;
      p1=p1->next;
      p2=p2->next;
    }
    if(flag==0)
    cout<<"\nit is a palindrome\n";
    else
    cout<<"\nit is not a palindrome\n";
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
    head2=head1;

    reverse();
    cout<<"\nthe reversed ll is:\n";
    display();
    palindrome();
    return 0;
}