#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList={10,20,30};
    // myList.clear();
    myList.resize(2);
    myList.resize(5,100);
    cout<<"max size = "<<myList.max_size()<<endl;

    for(int val:myList)
    {
        cout<<val<<" ";
    }
    cout<<endl;



    return 0;
}