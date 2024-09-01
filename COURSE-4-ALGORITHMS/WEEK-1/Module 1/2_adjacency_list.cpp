#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    // cout << "size = " << sizeof(mat)/sizeof(mat[0][0]) << endl;
    vector<int> mat[n];
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    // printing the matrix
    for (int i = 0; i < n; i++)
    {
        cout<<i<<" : ";
        for (int element : mat[i])
        {
            cout << element << " ";
        }
        cout << endl;
    }
    // cout << endl;




    

    return 0;
}