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
    struct node* t;
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
void palindrome()
{   stack<int> stk;
    int flag=0;
    struct node*p1 =new node;
    p1=head;
    
    while(p1!=NULL)
    {
      
     stk.push(p1->data); 
     p1=p1->next;
    }
    p1=head;
     while(p1!=NULL)
    { 
        if(p1->data==stk.top())
         flag=0;
         else
         flag=1;       
           stk.pop();   
        p1=p1->next;
      
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

    
    palindrome();
    return 0;
}