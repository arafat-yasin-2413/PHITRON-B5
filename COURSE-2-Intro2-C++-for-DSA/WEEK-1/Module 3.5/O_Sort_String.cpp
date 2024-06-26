#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>> n; 


    // 10^7 size array not possible 
    // so doing it by frequency array

    // corner case: duplicate character can occurs

    int ar[26]={0};
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        ar[ch-'a']++;
    }


    for(int i=0;i<26; i++)
    {
        while(ar[i]!=0)
        {
            char ch2 = i+'a';
            cout<<ch2;
            ar[i]--; // if any character comes more than once
            // for that case, amra sei character er count 1 kore komaiya dicchi

        }
    }



    return 0;
}