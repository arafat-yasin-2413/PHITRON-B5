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
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // queue theke ber kori
        Node *f = q.front();
        q.pop();
        // jabotiyo kaj kori
        int l, r;
        cin >> l >> r;

        // children banai
        Node *leftNode, *rightNode;
        if (l == -1)
            leftNode = NULL;
        else
            leftNode = new Node(l);
        if (r == -1)
            rightNode = NULL;
        else
            rightNode = new Node(r);
        // children k root er sathe connect kori
        f->left = leftNode;
        f->right = rightNode;
        // children push kori
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void print_level_order(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);
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
bool search_in_bst(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (x == root->val)
        return true;

    if (x < root->val)
        return search_in_bst(root->left, x);
    else
        return search_in_bst(root->right, x);
}

int main()
{
    Node *root = input_tree();
    print_level_order(root);
    cout << endl;

    bool isFound = search_in_bst(root, 266);
    // if (isFound)
    //     cout << "Yes, Found" << endl;
    // else
    //     cout << "Not Found" << endl;
    cout << isFound << endl;

    return 0;
}