#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree(){
    int val;
    cin >> val;
    Node* root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node*> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void printLevelNodes(Node* root, int X) 
{
    queue<Node*> q;
    q.push(root);
    int currentLevel = 0;

    while (!q.empty()) 
    {
        int levelSize = q.size();
        if (currentLevel == X) 
        {
            int n = 1;
            while (levelSize--) 
            {
                Node* p= q.front();
                q.pop();
                if (!n) cout << " ";
                cout << p->val;
                n = 0;
            }
            return;
        }
        for (int i = 0; i < levelSize; i++) 
        {
            Node* p = q.front();
            q.pop();
            if (p->left) q.push(p->left);
            if (p->right) q.push(p->right);
        }
        currentLevel++;
    }
    cout <<"Invalid"<< endl;
}

int main() 
{
    Node* root = input_tree();
    int X;
    cin >> X;
    printLevelNodes(root, X);
    return 0;
}