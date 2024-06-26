#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;

    Student(char nm[], int rl, int cl)
    {
        // name = nm;
        strcpy(name, nm);
        roll = rl;
        cls = cl;
    }
};

int main()
{
    char nm[100] = "Atik";
    // int roll,cls;
    // cin>>nm>>roll>>cls;

    int *pt = new int;

    Student *ptr = new Student(nm, 67, 8);
    // ptr is just an address keeper

    // Student obj(nm,roll,cls);
    cout << (*ptr).name << " " << ptr->cls << " " << ptr->roll << endl;

    return 0;
}