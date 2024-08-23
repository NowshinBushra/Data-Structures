#include<bits/stdc++.h>
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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int size1(Node *head1)
{
    Node* tmp1 = head1;
    int count=0;
    while (tmp1 != NULL)
    {
        count++;
        tmp1 = tmp1->next;
    }
    return count;
}
int size2(Node *head2)
{
    Node* tmp2 = head2;
    int count2=0;
    while (tmp2 != NULL)
    {
        count2++;
        tmp2 = tmp2->next;
    }
    return count2;
}
    
void is_similar(Node *head1, Node *head2)
{
    int flag = 0;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val) 
        {
            flag = 1;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    
    if(flag==0 && size1(head1)==size2(head2))
        cout  << "YES";
    else
        cout << "NO";
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val1, val2;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insert_tail(head1, tail1, val1); 
    }
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_tail(head2, tail2, val2); 
    }
    is_similar(head1, head2);
    return 0;
}





