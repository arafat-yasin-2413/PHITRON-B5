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
        if (a.marks < b.marks)
            return true;
        else if (a.marks > b.marks)
            return false;
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
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;
    // getchar();

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    // while (!pq.empty())
    // {
    //     Student a = pq.top();
    //     pq.pop();
    //     cout << a.name << " " << a.roll << " " << a.marks << endl;
    // }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int command;
        cin >> command;
        if (command == 0) // insert then print cur max student
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);

            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Student a = pq.top();
                cout << a.name << " " << a.roll << " " << a.marks << endl;
            }
        }
        else if (command == 1) // print cur max student
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Student a = pq.top();
                cout << a.name << " " << a.roll << " " << a.marks << endl;
            }
        }
        else if (command == 2) // delete max, then print cur max student
        {
            if (!pq.empty())
            {
                pq.pop();

                if (!pq.empty())
                {
                    Student a = pq.top();
                    cout << a.name << " " << a.roll << " " << a.marks << endl;
                }

                else
                {
                    cout << "Empty" << endl;
                }
            }

            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}