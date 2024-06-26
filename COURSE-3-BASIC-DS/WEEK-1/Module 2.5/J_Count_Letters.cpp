#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> f(26, 0);
    // for (int val : f)
    // {
    //     cout << val << endl;
    // }
    
    char ch;
    while(cin>>ch)
    {
        f[ch-'a']++;
    }

    for(int i =0; i<f.size(); i++)
    {
        if(f[i]>0)
        {
            char x = i+'a';
            cout<<x<<" : "<<f[i]<<endl;
        }
    }

    return 0;
}