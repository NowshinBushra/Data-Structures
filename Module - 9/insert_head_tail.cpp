#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node *next;
        Node *prev;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};

void print_normal(Node *head)
{
    Node *tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node *tail)
{
    Node *tmp=tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
void insert_head(Node *&head,Node *&tail, int val)
{
    Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insert_tail(Node *&head,Node *&tail, int val)
{
    Node *newNode=new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
int size(Node *head)
{
    Node *tmp=head;
    int cnt=0;
    while (tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
int main()
{
   // Node *head=NULL;
   // Node *tail=NULL;
    Node *head=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    Node *c=new Node(40);
    Node *tail=c;

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;

    int pos,val;
    cin>>pos>>val;
    
    // insert_tail(head,tail,val);
    if(pos==0)
    {
       insert_head(head,tail,val);
    }
    else if(pos==size(head))
    {
        insert_tail(head,tail,val);
    }
    else if(pos>=size(head))
    {
        cout<<"Invalid"<<endl;
    }

    print_normal(head);
    print_reverse(tail);

    return 0;
}