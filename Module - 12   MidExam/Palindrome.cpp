#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node*next;
        Node*prev;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
void is_palindrome(Node *head, Node *tail)
{
    int flag=0;
    Node *tmp1 = head;
    Node *tmp2 = tail;
    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val==tmp2->val)
        {
            flag=0;
        }
        else{
            flag=1;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->prev;
        cout<<endl;
    }
    if (flag==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}

void insert_tail(Node *&head, Node *&tail, Node val)
{
    Node*newNode=new Node (val);
    if (tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}

int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1)
            break;
        insert_tail(head,tail,val);
    }
    is_palindrome(head,tail);
    return 0;
}