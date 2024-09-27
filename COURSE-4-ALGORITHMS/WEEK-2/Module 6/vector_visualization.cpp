#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v(5);
    v[0].push_back(10);
    v[0].push_back(20);
    v[0].push_back(30);

    v[1].push_back(40);
    v[1].push_back(50);
    v[1].push_back(60);
    v[1].push_back(70);

    v[2].push_back(80);
    v[2].push_back(90);

    v[3].push_back(12);
    v[3].push_back(22);
    v[3].push_back(23);
    v[3].push_back(25);
    v[3].push_back(27);

    v[4].push_back(28);
    v[4].push_back(33);

    // cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int el : v[i])
        {
            cout << el << " ";
        }
        cout << endl;
    }

    return 0;
}