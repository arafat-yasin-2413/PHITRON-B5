#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void hello()
    {
        cout << "Printing Hello inside class" << endl;
    }
};

int main()
{
    Person rakib("Rakib Hasan", 23);
    rakib.hello();
    cout << rakib.name << " " << rakib.age << endl;

    return 0;
}