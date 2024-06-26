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

    // Student ar[n];
    Student *ar = new Student[n];
    for (int i = 0; i < n; i++)
    {
        getchar();
        getline(cin, ar[i].name);
        cin >> ar[i].roll >> ar[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].marks << endl;
    }

    return 0;
}