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
int Delete(struct node *p,int index,int n)
{
 struct node *q;
 int x=-1,i;
 
 if(index < 1 || index > n)
 return -1;
 if(index==1)
 {
 q=head;
 x=head->data;
 head=head->next;
 free(q);
 return x;
 }
 else
 {
 for(i=0;i<index-1;i++)
 {
 q=p;
 p=p->next;
 }
 q->next=p->next;
 x=p->data;
 free(p);
 return x;
 
 }
 
 
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
    cout<<"\nenter the index of the element to be deleted\n";
    cin>>x;
    Delete(head,x,n);
    display();
    return 0;
}