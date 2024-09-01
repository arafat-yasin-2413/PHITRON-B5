#include <bits/stdc++.h>
using namespace std;

class Pair
{
public:
    int first;
    int second;
    void make_pair(int a, int b)
    {
        first = a;
        second = b;
    }
};

int main()
{
    // manually making pair
    Pair p;
    // p.first = 10;
    // p.second = 20;

    p.make_pair(30, 50);

    cout << "p.first = " << p.first << " " << endl
         << "p.second = " << p.second << endl;

    // STL pair

    // pair<int, int> pr;
    pair<string, int> pr;

    // pr = make_pair(40, 70);
    pr = make_pair("rahat", 70);

    cout << pr.first << endl;
    cout << pr.second << endl;

    return 0;
}