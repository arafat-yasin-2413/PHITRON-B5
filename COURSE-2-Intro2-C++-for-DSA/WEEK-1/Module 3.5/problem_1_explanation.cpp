#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int marks;

    Student(char *nm, int mks)
    {
        strcpy(name, nm);
        marks = mks;
    }
};

int main()
{
    char nm1[100]="Rahim";
    char nm2[100]="Karim";
    char nm3[100]="Atik";
    Student a = Student(nm1, 76);
    Student b = Student(nm2, 84);
    Student c = Student(nm2, 81);

    // cout << a.name << " " << a.marks << endl;
    if(a.marks > b.marks && a.marks > c.marks)
    {
        // object a has the highest marks
    }

    else if(b.marks > a.marks && b.marks > c.marks)
    {
        // object b has the highest marks
    }

    return 0;
}