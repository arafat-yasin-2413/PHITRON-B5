/*
#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second > b.second;
    }
};

void print_map(map<int, int> mp)
{
    cout << "map = " << "\n";
    for (auto it : mp)
    {
        cout << it.first << " : " << it.second << "\n";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;

    // pq.push({1,18});
    // pq.push({1,17});
    // pq.push({1,9});
    // pq.push({2,9});

    int q;
    cin >> q;

    while (q--)
    {
        int operation;
        cin >> operation;
        if (operation == 1)
        {
            int X;
            cin >> X;
            mp[X]++;
            pq.push({mp[X], X});


            // cout<<"pq = "<<"\n";
            // while (!pq.empty())
            // {
            //     cout << pq.top().first << " : " << pq.top().second << "\n";
            //     pq.pop();
            // }
            // cout<<"\n";
        }

        else if (operation == 2)
        {
            if (pq.empty())
            {
                cout << "empty" << "\n";
            }

            else
            {
                while (!pq.empty())
                {
                    pair<int, int> pr = pq.top();
                    int value = pr.second;
                    int occurence = pr.first;

                    if (mp[value] == occurence)
                    {
                        cout << value << "\n";
                        mp[value] = 0;
                        pq.pop();
                    }
                }
            }
        }
    }

    return 0;
}
*/



#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second > b.second;
    }
};

void print_map(map<int, int> mp)
{
    cout << "map = " << "\n";
    for (auto it : mp)
    {
        cout << it.first << ": " << it.second << "\n";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    map<int, int> mp;

    while (q--)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            int X;
            cin >> X;
            mp[X]++;
            pq.push({mp[X], X});
        }

        else if (op == 2)
        {
            if (pq.empty())
            {
                cout << "empty" << "\n";
            }

            else
            {
                while (!pq.empty())
                {
                    pair<int,int> par = pq.top();
                    int value = par.second;
                    int occurrence = par.first;

                    if (mp[value] == occurrence)
                    {
                        cout << value << "\n";
                        mp[value] = 0;
                        pq.pop();

                        if (mp[value] > 1)
                        {
                            pq.push({mp[value], value});
                        }

                        break;
                    }

                    pq.pop();
                }
            }
        }
    }


    return 0;
}