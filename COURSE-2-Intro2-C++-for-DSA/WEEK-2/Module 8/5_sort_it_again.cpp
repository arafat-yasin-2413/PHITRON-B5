#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

/*
eng boro kina boro hoile true
false
else
math mark niye kaj korbo

else
math er choto boro check
a id choto kina , chto hoile


*/

bool cmp(Student a, Student b)
{
    // eng boro kina
    if(a.eng_marks > b.eng_marks)
    {
        return true;
    }
    // eng choto kina
    else if(a.eng_marks < b.eng_marks)
    {
        return false;
    }
    // else (eng boro o na, eng choto o na , maane eng soman)
    else
    {
        // ekhon ager moto math boro kina check korbo
        if(a.math_marks > b.math_marks)
        {
            return true;
        }
        // math choto kina check korbo
        else if(a.math_marks < b.math_marks)
        {
            return false;
        }
        // uporer konotai na hoile
        else
        {
            // ekhon id er vitti te kaj korbo 
            if(a.id < b.id)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
        
        
    }



/*
    if (a.eng_marks > b.eng_marks)
    {
        return true;
    }
    else if (a.eng_marks < b.eng_marks)
    {
        return false;
    }
    else
    {
        if (a.math_marks > b.math_marks)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    if (a.math_marks == b.math_marks)
    {
        if (a.id < b.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

 */   
}
int main()
{
    int n;
    cin >> n;

    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].cls >> ar[i].section >> ar[i].id >> ar[i].math_marks >> ar[i].eng_marks;
    }

    sort(ar, ar + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].cls << " " << ar[i].section << " " << ar[i].id << " " << ar[i].math_marks << " " << ar[i].eng_marks << endl;
    }

    return 0;
}