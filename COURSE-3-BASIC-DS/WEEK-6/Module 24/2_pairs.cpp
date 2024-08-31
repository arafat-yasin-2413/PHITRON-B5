#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int val;

    Person(string name, int val)
    {
        this->name = name;
        this->val = val;
    }
};

class cmp
{
public:
    bool operator()(Person a, Person b)
    {

        if (a.name > b.name)
            return true;
        else if (a.name < b.name)
            return false;
        else
        {
            if (a.val < b.val)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;

    priority_queue<Person, vector<Person>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int val;
        cin >> name >> val;

        Person obj(name, val);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        Person a = pq.top();
        cout << a.name << " " << a.val << endl;
        pq.pop();
    }

    return 0;
}