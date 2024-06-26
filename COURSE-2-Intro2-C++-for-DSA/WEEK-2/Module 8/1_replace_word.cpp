#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s, x;
        cin >> s;
        cin >> x;
        getchar();
        // cout << s << endl
        //      << x << endl;

        while (s.find(x) != -1)
        {
            int len_of_x = x.size();
            s.replace(s.find(x), len_of_x, "#");
        }
        // cout << s << endl
        //      << x << endl;
        cout << s << endl;
    }

    return 0;
}

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