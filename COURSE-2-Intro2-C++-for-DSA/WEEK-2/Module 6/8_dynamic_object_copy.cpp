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
};

int main()
{
    Person *rakib = new Person("Rakib Hasan", 24);
    Person *ratul = new Person("Ratul Mia", 36);

    // rakib = ratul;
    // rakib->name = ratul->name;
    // rakib->age = ratul->age;

    *rakib = *ratul;

    cout << rakib->name << " " << rakib->age << endl;
    cout << ratul->name << " " << ratul->age << endl;
    
    return 0;
}