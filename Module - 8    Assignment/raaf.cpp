#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void remove_duplicate(Node *head)
{
    Node *tmp1=head;
    while (tmp1!=NULL)
    {
        Node *tmp2=tmp1;
        while (tmp2->next!=NULL)
        {
            if (tmp2->next->val==tmp1->val)
            {
                Node *duplicate = tmp2->next;
                tmp2->next=tmp2->next->next;
                delete duplicate;
            }
            else
                tmp2=tmp2->next;
        }
        tmp1=tmp1->next;
    }
    
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    
    int val;
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    remove_duplicate(head);
    print_list(head);
    return 0;
}