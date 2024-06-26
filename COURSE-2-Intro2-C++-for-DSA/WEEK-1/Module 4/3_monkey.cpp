#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    char ar[100005];

    while(cin.getline(ar,100005))
    {
        // cout<<ar<<endl;
        int len = strlen(ar);
        // cout<<len<<endl;
        sort(ar,ar+len);

        for(int i=0; i<len; i++)
        {
            if(ar[i] == ' ')
            {
                continue;
            }
            else 
            {
                cout<<ar[i];
            }
        }
        cout<<endl;

        // cout<<ar<<endl;
    }
   

    return 0;
}