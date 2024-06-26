#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].cls >> ar[i].section >> ar[i].id;
    }

    int j=0, k= n-1;
    while(j<k)
    {
        // char temp = ar[j].section;
        // ar[j].section = ar[k].section;
        // ar[k].section = temp;
        swap(ar[j].section, ar[k].section);
        j++;
        k--;
    }


    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].cls << " " << ar[i].section << " " << ar[i].id << endl;
    }

    return 0;
}