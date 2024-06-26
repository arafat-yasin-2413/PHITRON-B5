#include<bits/stdc++.h>
using namespace std;

// same approach as before 
// just a little change between cin.getline() and getline(cin,s)


int main()
{
    // string s;
    // while(getline(cin,s))
    // {
    //     cout<<s<<endl;
    // }



    // char ar[100005];
    string st;

    // while(cin.getline(ar,100005))
    while(getline(cin,st))
    {
        // cout<<ar<<endl;
        int len = st.length();
        // cout<<len<<endl;
        sort(st.begin(),st.end());

        for(int i=0; i<len; i++)
        {
            if(st[i] == ' ')
            {
                continue;
            }
            else 
            {
                cout<<st[i];
            }
        }
        cout<<endl;

        // cout<<ar<<endl;
    }


    

    return 0;
}