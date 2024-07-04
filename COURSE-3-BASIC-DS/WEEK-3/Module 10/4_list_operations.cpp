#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>myList = {20,40,30,10,50,10,10};

    // myList.remove(10);

    myList.sort(greater<int>());

    // myList.sort(); // nlogN

    // sort(myList.begin(),myList.end(), greater<int>()); 
    myList.unique(); // n

    for(int val:myList)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}