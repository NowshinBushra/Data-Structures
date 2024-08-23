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

/*      Module 7 e sudhu reversely print kora hoyeche.
      Main list ta reverse kora hoyni.
 ekhane main list reverse kore then normally print kora hoyeche. */

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void reverse_list(Node *&head, Node *curr)
{
    if (curr->next == NULL)
    {
        head = curr;
        return;
    }
    reverse_list(head, curr->next);
    curr->next->next = curr;
    curr->next = NULL;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_list(head);
   
    reverse_list(head, head);
    print_list(head);
  
    return 0;
}