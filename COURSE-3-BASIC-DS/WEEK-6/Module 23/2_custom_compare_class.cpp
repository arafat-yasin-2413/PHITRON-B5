#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        // bam pasher marks boro hoile chnage koiro
        if (a.marks > b.marks)
            return true;
        // bam pasher marks choto tahkle change koirona
        else if (a.marks < b.marks)
            return false;
        // 2 joner marks soman hoile roll er vitti te sajau
        else
        {
            if (a.roll > b.roll)
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

    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;

        Student obj(name, roll, marks);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        Student a = pq.top();
        cout << a.name << " " << a.roll << " " << a.marks << endl;
        pq.pop();
    }

    return 0;
}