#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].roll >> ar[i].marks;
    }

    Student mn;
    mn.marks = INT_MAX;
    Student mx;
    mx.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (ar[i].marks < mn.marks)
        {
            mn = ar[i];
        }
        if(ar[i].marks > mx.marks)
        {
            mx = ar[i];
        }
    }

    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;

    return 0;
}