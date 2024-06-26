#include<bits/stdc++.h>
using namespace std;


// Solved By AMS vaiya. 
int isLucky(int n)
{
    while(n!=0)
    {
        int digit = n%10;
        n = n/10;
        // My brain didn't think this. LOL. I had gone for string approach.
        // But this is Easy and Convenient
        if(digit != 4 && digit!=7)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a, b; 
    cin>> a>>b;

    int flag = 0;
    for(int i=a; i<=b; i++)
    {
        int found_lucky = isLucky(i);
        if(found_lucky == 1)
        {
            cout<<i<<" ";
            flag = 1;
        }
    }

    if (flag == 0)
    {
        cout<<"-1";
    }


    return 0;
}