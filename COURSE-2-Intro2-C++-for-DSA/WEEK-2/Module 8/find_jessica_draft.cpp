#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // cout << s << endl;

    int flag = 0;

    if (s.size() == 7)
    {
        int position = s.find("Jessica");
        if (position != -1)
        {
            flag = 1;
        }
    }

    else if (s[0] == 'J')
    {
        int position = s.find(" Jessica ");
        cout << "Jessica paisi 22 no line" << position << endl;
        if (position != -1)
        {
            flag = 1;
        }
    }

    else
    {
        int temp_pos = s.find("Jessica");
        cout << "temp pos = " << temp_pos << endl;
        if (temp_pos != -1)
        {
            if (s[temp_pos - 1] == ' ' && s[s.size() - 1] == '\0') // Ratul Rahat Jessica
            {
                int position = s.find(" Jessica");
                if (position != -1)
                {
                    flag = 1;
                }
            }

            else if (s[temp_pos - 1] == ' ' && s[temp_pos + 7] == ' ') // Ratul Jessica Rahat
            {
                int position = s.find(" Jessica ");
                if (position != -1)
                {
                    flag = 1;
                }
            }

            else if (s[temp_pos - 1] == ' ' && s[temp_pos + 7] != ' ') // Ratul Jessicabcd Munna
            {
                flag = 0;
            }
        }
        else if (temp_pos == -1)
        {
            flag = 0;
        }
    }

    if (flag == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        cout << s << endl;
        int temp_pos = s.find("Jessica");
        cout << "temp pos = " << temp_pos << endl;
    }

    cout << "outside of while loop : " << s << endl;

    return 0;
}

*/

/*
hints
প্রথমে N কে declare করে ইনপুট নিবেন। এরপর N size এর array of object বানাবেন ( যেইটির জন্য একটি class বানাবেন যেইখানে nm, cls, s, id, math_marks, eng_marks এই variable গুলোকে declare করবেন )।
 এরপর N বার লুপ চালিয়ে student এর details গুলো ইনপুট নিবেন, array of object এর মধ্যে।

এরপর array of object কে build-in sort function দিয়ে sort করবেন,সেইখানে ৩য় argument এ Compare Predicate (cmp) ব্যাবহার করবেন ।

এরপর bool type cmp function লিখবেন যেইখানে 2 টি parameter থাকবে ,সেই 2 টি parameter এ ২টি object পাবেন।

সেই object ২টির eng_marks conditions দিয়ে compare করবেন এবং সেই অনুযায়ী true অথবা false return করবেন।

যদি object ২টির eng_marks মিলে যায় তাহলে object ২টির math_marks উপর ভিত্তি করে true অথবা false return করবেন।


test 4
input

Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Rahat Rifat Sakib Asif Sifat Munna Jessica


output: Yes


test 5

input
JessiCa JesSica jessica JESSICA JessicaJessica JEssica JessicA JessIca JessiCa Jessicajessica Jessiica Jessicar JJessica

output: no

*/