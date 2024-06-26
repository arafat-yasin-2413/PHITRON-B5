#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;

    Person(string nm, int ag, int mk1, int mk2)
    {
        name = nm;
        age = ag;
        marks1 = mk1;
        marks2 = mk2;
    }

    void hello()
    {
        cout << "Name = " << name << ", age =  " << age << endl;
    }

    int total_marks()
    {
        return marks1 + marks2;
    }
};

int main()
{
    Person rakib("Rakib Hasan", 24, 70, 80);
    cout << rakib.total_marks() << endl;
    rakib.hello();

    return 0;
}