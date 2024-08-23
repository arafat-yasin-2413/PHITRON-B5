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

vector<int> v;
void leaf_nodes(Node *root)
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
        if (f->left == NULL and f->right == NULL)
        {
            v.push_back(f->val);
        }
        // children push kori

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

int main()
{
    /*
        Test Case from ASM vaiya
        10 20 30 150 -1 40 70 140 -1 50 60 -1 80 -1 -1 110 -1 -1 120 90 100 -1 -1 130 -1 -1 -1 -1 -1 -1 -1
        output should be 
        140 130 110 100 90
    */
    Node *root = input_binary_tree();

    leaf_nodes(root);
    sort(v.begin(), v.end(), greater<int>());
    // for(int i = 0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // reverse(v.begin(),v.end());
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}