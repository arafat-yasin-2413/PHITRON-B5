#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        char name[100];
        int roll; 
        char section;
        int math_marks; 
        int cls;

        Student(char *nm, int rl, char sec, int marks, int cl)
        {
            strcpy(name,nm);
            roll = rl;
            section = sec;
            math_marks = marks;
            cls = cl;
        }
};


int main()
{

    char nm1[100] = "Sadek Khan";
    char nm2[100] = "Rakib Mia";
    char nm3[100] = "Anisul Islam";

    Student sadek(nm1,25,'C',86,9);
    Student rakib(nm2,17,'C',76,9);
    Student anisul(nm3,32,'C',94,9);

    // cout<<sadek.name<<endl;
    // cout<<rakib.name<<endl;
    // cout<<anisul.name<<endl;


    if(sadek.math_marks > rakib.math_marks && sadek.math_marks > anisul.math_marks)
    {
        cout<<sadek.name<<" has the highest marks"<<endl;
    }
    
    else if(rakib.math_marks > sadek.math_marks && rakib.math_marks > anisul.math_marks)
    {
        cout<<rakib.name<<" has the highest marks"<<endl;
    }

    else if(anisul.math_marks > sadek.math_marks && anisul.math_marks > rakib.math_marks)
    {
        cout<<anisul.name<<" has the highest marks"<<endl;
    }

    return 0;
}