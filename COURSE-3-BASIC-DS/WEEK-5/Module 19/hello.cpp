#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
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
    // root নাল হলে তাকে কিউ তে পুশ করা যাবে না
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        // 1. queue theke ber kori
        Node *parent = q.front();
        q.pop();

        // 2. jabotiyo kaj kori
        int l, r;
        cin >> l >> r;

        Node *leftNode, *rightNode;
        if (l == -1)
            leftNode = NULL;
        else
            leftNode = new Node(l);
        if (r == -1)
            rightNode = NULL;
        else
            rightNode = new Node(r);

        // 3. connection toiri kori
        if (leftNode)
            parent->left = leftNode;
        if (rightNode)
            parent->right = rightNode;

        // 4. children push kori
        if (leftNode)
            q.push(leftNode);
        if (rightNode)
            q.push(rightNode);
    }

    return root;
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

void inorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main()
{
    Node *root = input_tree();

    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    

    return 0;
}