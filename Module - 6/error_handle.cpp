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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)  //--------------------------Error handled before--------------------
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    //tmp ekhon last node e
    tmp->next = newNode;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);

    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp==NULL)  //--------------------------Error handling 1 --------------------
        {
            cout<<endl<<"Invalid index"<<endl;
            return;
        }      
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp==NULL)  //--------------------------Error handling 2 --------------------
        {
            cout<<endl<<"Invalid index"<<endl;
            return;
        }
    }
    if (tmp->next==NULL)  //--------------------------Error handling 3 --------------------
    {
        cout<<endl<<"Invalid index"<<endl;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    if (head==NULL)  //--------------------------Error handling 4 --------------------
    {
        cout<<"Head is not available"<<endl;
        return; 
    }
    
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
void print_linked_list(Node *head)
{
    cout << "Linked List: ";
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
    while (true)
    {
        cout << endl
             << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Insert at head" << endl;
        cout << "Option 5: Delete from position" << endl;
        cout << "Option 6: Delete head" << endl;
        cout << "Option 7: Terminate" << endl
             << endl;
        int op;
        cout << "Option: ";
        cin >> op;
        if (op == 1)
        {
            cout << "Enter a value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            cout << "Position: ";
            int pos, val;
            cin >> pos;
            cout << "Enter a value: ";
            cin >> val;
            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_position(head, pos, val);
            }
        }
        else if (op == 4)
        {
            int val;
            cout << "Enter a value: ";
            cin >> val;
            insert_at_head(head, val);
        }
        else if (op == 5)
        {
            cout << "Position: ";
            int pos;
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if (op==6)
        {
            delete_head(head);
        }      
        else if (op == 7)
        {
            break;
        }
    }
    return 0;
}