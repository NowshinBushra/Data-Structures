#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
Node *head = NULL;
void insert_head(int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insert_tail(int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void delete_index(int index)
{
    if (index < 0)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
        return;
    }
    if (index == 0 && head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node *temp = head;
        Node *prev = NULL;
        int currentIndex = 0;
        while (temp != NULL && currentIndex < index)
        {
            prev = temp;
            temp = temp->next;
            currentIndex++;
        }
        if (temp != NULL)
        {
            prev->next = temp->next;
            delete temp;
        }
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int Q;
    cin >> Q;
    int X, V;
    for (int i = 0; i < Q; ++i)
    {
        cin >> X >> V;
        if (X == 0)
        {
            insert_head(V);
        }
        else if (X == 1)
        {
            insert_tail(V);
        }
        else if (X == 2)
        {
            delete_index(V);
        }
    }
    return 0;
}


/*
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
void insert_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
    {
        tail = head;
    }
    print_list(head);
}
void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    print_list(head);
}
int size(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void delete_index(Node *&head, Node *&tail, int v)
{
    if (head == NULL)
        return;
    if (v < 0)
    {
        print_list(head);
        return;
    }
    if (v == 0)
    {
        Node *deleteHead = head;
        head = head->next;
        delete deleteHead;
        print_list(head);
        return;
    }
    if (v >= size(head))
    {
        print_list(head);
        return;
    }
    Node *tmp = head;
    for (int i = 1; i <= v - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteVal = tmp->next;
    tmp->next = tmp->next->next;
    if (tmp->next == NULL) // if the last element was deleted, update the tail
    {
        tail = tmp;
    }
    delete deleteVal;
    print_list(head);
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_index(head, tail, v);
        }
    }
    return 0;
}
*/