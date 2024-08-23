#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:

    int val;
    Node *next;

    Node(int data)
    {
        val=data;
        this->next=NULL;
    }
};
int size(Node *head)
{
    Node *tmp=head;
    int count=0;
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
void insert_value(Node* head, int pos, int v)
{
    Node *newNode= new Node(v);
    Node *tmp=head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}

void print_linked_list(Node *head)
{
    Node *tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

int main()
{
    Node *head= new Node(100);
    Node *a= new Node(10);
    Node *b= new Node(20);
    Node *c= new Node(30);
    Node *d= new Node(40);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    print_linked_list(head);

    int pos, val;
    cout<<"Enter Position:";
    cin>>pos;
    cout<<"Enter value:";
    cin>>val;

    if (pos>size(head))
    {
        cout<<"invalid index"<<endl;
    }
    else
    {
        insert_value(head, pos, val);
    }
    print_linked_list(head);
    return 0;
}