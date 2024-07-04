#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>myList = {10,20,30,40,50,60,30,70,30};
    // list<int>newList;
    // list<int>newList = {100,200,300};
    vector<int>v = {3,4,5};
    
    // newList = newList;
    // newList.assign(myList.begin(), myList.end());
    // myList.push_back(30);
    // myList.push_front(9);
    // myList.pop_back();

    // myList.insert (next(myList.begin(),1),7);
    // myList.insert (next(myList.begin(),2),6);

    // myList.erase(next(myList.begin(),2));

    // myList.insert(next(myList.begin(),3),{100,200});
    // myList.insert(next(myList.begin(),3),newList.begin(),newList.end());
    // myList.insert(next(myList.begin(),3),v.begin(),v.end());

    // myList.erase(next(myList.begin(),2), next(myList.begin(),6));

    // replace(myList.begin(),myList.end(), 30,100);

    // for(int val:myList)
    // {
    //     cout<<val<<" ";
    // }
    // cout<<endl;


    auto it = find(myList.begin(),myList.end(), 30);

    // cout<<*it<<endl;
    if (it == myList.end())
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }

    return 0;
}