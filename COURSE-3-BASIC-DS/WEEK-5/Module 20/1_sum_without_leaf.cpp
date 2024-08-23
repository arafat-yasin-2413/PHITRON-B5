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
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // tree theke ber kore ekta node er kache rakhlam
        Node *f = q.front();
        q.pop();
        // kaj korbo ekhon , manee f er value print korbo
        cout << f->val << " ";
        // children gula ke queue te rakhi
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
}

int sum = 0;
void sumWithoutLeaf(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL and root->right == NULL)
    {
        return;
    }

    sumWithoutLeaf(root->left);
    sumWithoutLeaf(root->right);

    sum += root->val;
}

int main()
{
    Node *root = input_binary_tree();
    // level_order(root);

    sumWithoutLeaf(root);

    cout << sum << endl;

    return 0;
}