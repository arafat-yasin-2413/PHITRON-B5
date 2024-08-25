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
Node *convert_array_into_bst(int ar[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(ar[mid]);
    Node *leftRoot = convert_array_into_bst(ar, n, l, mid - 1);
    Node *rightRoot = convert_array_into_bst(ar, n, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    Node *root = convert_array_into_bst(ar, n, 0, n - 1);
    print_level_order(root);
    cout << endl;

    return 0;
}