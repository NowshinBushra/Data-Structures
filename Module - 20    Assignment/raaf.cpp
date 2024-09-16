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
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
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

 int level = 0;
 int nodeCount = 0;
 int expectedNodes = 1;
 int depth = 0;

int maxDepth(Node* root) 
{
    if(root==NULL)
     return 0;
    
    int l= maxDepth(root->left);
    int r= maxDepth(root->right);
    depth= max(l,r)+1;
    return depth;
}

bool isPerfect(Node* root)
{
    if(root->left==NULL && root->right==NULL) return false;
    bool l= isPerfect(root->left);
    bool r= isPerfect(root->right);
    if(l==false || r==false) return false;
    return true;
}
// bool perfect_tree(Node* root) 
// {
//     queue<Node*> q;
//     q.push(root);
//     int depth = maxDepth(root);
    
//     while (!q.empty()) 
//     {
//         int levelSize = q.size();
//         nodeCount += levelSize;
//         if (levelSize != expectedNodes) 
//             return false;  
//         for (int i = 0; i<levelSize; ++i) 
//         {
//             Node* p = q.front();
//             q.pop();
//             if (p->left) q.push(p->left);
//             if (p->right) q.push(p->right);
//         }
//         level++;
//         expectedNodes *= 2;  
//     }
//     int ans =pow(2, depth)-1;
//     return ans;
// }

int main() 
{
    Node* root = input_tree();
    if (isPerfect(root)) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1

// 10 20 30 40 -1 60 -1 -1 -1 -1 -1

// 10 20 -1 -1 -1

// 10 20 30 40 50 60 70 -1 -1 -1 -1 -1 -1 -1 -1