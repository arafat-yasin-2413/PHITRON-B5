#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fun()
{
    Student *karim = new Student(345, 9, 4.46);
    return karim;
}

int main()
{
    // Student rahim(343,8,4.98);
    // Student *rahim = new Student(343,8,4.98);
    // cout<<rahim->roll<<" "<<rahim->cls<<" "<<rahim->gpa<<endl;

    Student *ans = fun();
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;

    delete ans;

    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;


    return 0;
}
