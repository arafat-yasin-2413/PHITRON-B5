#include <bits/stdc++.h>
using namespace std;

class Freq
{
public:
    char value;
    int count;
};

bool cmp(Freq a, Freq b)
{
    if (a.count == b.count)
    {
        return a.value < b.value;
    }
    else
    {
        return a.count > b.count;
    }
}

int main()
{
    string s;
    cin>>s;

    Freq f[26];
    for(int i=0; i<26; i++)
    {
        f[i].value=(char)i+'a';
        f[i].count=0;
    }
    for(char ch:s)
    {
        f[ch-'a'].count++;
    }

    sort(f,f+26,cmp);

    /*
        ekhane f array er index er kache thkee character gula print kora jabe na. 
        karon , amra character gular count er upor base kore character gular index 
        swap kore feltesi. tai amra protita character pawaur jonno f[i].value diye 
        character print kortesi. ei bishoy ta aro clearly bojhar jonno 7-7 video tar 
        sesh 5 minute valovabe dekhen.
    */

    for(int i=0; i<26; i++)
    {
        while(f[i].count!=0)
        {
            cout<<f[i].value;
            f[i].count--;
        }
    }



    return 0;
}