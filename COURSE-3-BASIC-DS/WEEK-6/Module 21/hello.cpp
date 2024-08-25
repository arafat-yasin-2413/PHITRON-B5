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

bool search_in_bst(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
    {
        bool l = search_in_bst(root->left, x);
        return l;
    }
    else
    {
        bool r = search_in_bst(root->right, x);
        return r;
    }
}

void insert_in_bst(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }
    if (x < root->val)
    {
        if (root->left == NULL)
            root->left = new Node(x);
        else
            insert_in_bst(root->left, x);
    }
    else // x > root->val
    {
        if (root->right == NULL)
            root->right = new Node(x);
        else
            insert_in_bst(root->right, x);
    }
}

Node *convert(int ar[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(ar[mid]);
    Node *leftRoot = convert(ar, n, l, mid - 1);
    Node *rightRoot = convert(ar, n, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
int main()
{
    cout << "hello" << endl;

    return 0;
}