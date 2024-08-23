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

Node *input_binary_tree()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    // // root null hoile queue te push korbo na.
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

void level_order(Node *root)
{
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        // queue theke ber kori
        Node *f = q.front();
        q.pop();
        // jabotiyo kaj kori
        cout << f->val << " ";
        // children push kori
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

void print_left_outer(Node *root)
{
    if (root->left)
        print_left_outer(root->left);
    else if (root->right)
        print_left_outer(root->right);
    cout << root->val << " ";
}

void print_right_outer(Node *root)
{
    cout << root->val << " ";
    if (root->right)
        print_right_outer(root->right);
    else if (root->left)
        print_right_outer(root->left);
}

int main()
{
    /*
        case 0
        10 20 30 40 70 -1 50 90 110 -1 -1 80 60 -1 -1 -1 -1 100 -1 -1 -1 -1 -1
        
        case 1
        10 20 30 -1 40 70 50 60 90 -1 -1 80 -1 -1 -1 -1 -1 100 110 -1 -1 -1 -1

        case 2 
        10 -1 20 -1 50 80 -1 -1 -1

        case 3
        10 20 -1 -1 50 80 -1 -1 -1

    */
    Node *root = input_binary_tree();
    // level_order(root);

    if(root->left == NULL and root->right == NULL)
    {
        print_right_outer(root);
    }
    else if (root->left and root->right)
    {
        print_left_outer(root);
        print_right_outer(root->right);
    }

    else
    {
        if (root->left)
            print_left_outer(root);
        if (root->right)
            print_right_outer(root);
    }

    return 0;
}