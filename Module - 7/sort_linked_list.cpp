#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node *next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_tail(Node * &head, Node * &tail, int val)
{
    Node *newNode =new Node(val);
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    tail->next=newNode;
    tail=newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;

    int val;
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        insert_tail(head, tail,val);
    }
        for(Node* i=head; i->next != NULL; i=i->next)    // for (int i = 0; i < n-1; i++)
        {                                                // {
            for(Node* j=i->next; j!=NULL; j=j->next)     //     for (int j = i+1; j < n; j++)
            {                                            //     {
                if (i->val>j->val)                       //         if (a[i]>a[j])
                {                                        //         {
                    swap(i->val,j->val);                 //             swap(a[i],a[j])
                }                                        //         }
            }                                            //     }
        }                                                // }
    print_linked_list(head);
    return 0;
}