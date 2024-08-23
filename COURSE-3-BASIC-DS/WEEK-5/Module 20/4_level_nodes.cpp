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

int number_of_levels(Node *root)
{
    if (root == NULL)
        return 0;

    int l = number_of_levels(root->left);
    int r = number_of_levels(root->right);

    return max(l, r) + 1;
}

void level_nodes(Node *root, int x)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        // queue theke ber korbo
        pair<Node *, int> pr = q.front();
        Node *f = pr.first;
        int level = pr.second;
        q.pop();
        // jabotiyo kaj korbo
        if (level == x)
        {
            cout << f->val << " ";
        }
        // children push korbo
        if (f->left)
        {
            q.push({f->left, level + 1});
        }
        if (f->right)
        {
            q.push({f->right, level + 1});
        }
    }
}

int main()
{
    Node *root = input_binary_tree();
    int searching_level;
    cin >> searching_level;

    int total_level = number_of_levels(root);
    // cout << "total_level = " << total_level - 1 << endl;

    if (searching_level > total_level - 1)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        level_nodes(root, searching_level);
        cout << endl;
    }

    return 0;
}