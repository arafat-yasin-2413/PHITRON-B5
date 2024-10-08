/*
//creating expression
// from ASM vaiya

Initialize a global variable result to store the target sum.
Define a recursive function check that takes two parameters:
sum: the current sum of elements being considered.
index: the index of the current element in the array.
In the check function:
If index is equal to sz (the size of the array), return true if the current sum is equal to the target result, indicating that a valid combination has been found.
Otherwise, recursively explore two routes:
Add the current element (arr[index]) to the sum and call check with the next index (index + 1).
Subtract the current element (arr[index]) from the sum and call check with the next index (index + 1).
Return true if either of the two routes results in true, indicating that a valid combination has been found.
In the main function:
Read the size sz and the target sum result.
Read the array of numbers arr.
Call the check function with the initial sum of arr[0] and index 1.
If check returns true, output "YES"; otherwise, output "NO."








Code:
#include <bits/stdc++.h>
using namespace std;
long long sz,result;
long long arr[21];
bool check(long long sum,long long index){
    if(index == sz){
         return sum == result;
    }
    bool route1 = check(sum+arr[index],index+1);
    bool route2 = check(sum-arr[index],index+1);
    return route1 || route2;
}
int main() {
    long long i;
    cin>>sz>>result;
    for(i=0;i<sz;i++){
        cin>>arr[i];
    }
    if(check(arr[0],1)){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

}

*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll dp[22][1000005];

bool subset_sum(int n, int S, int ar[])
{
    if (n == 0)
    {
        if (S == 0)
            return true;
        else
            return false;
    }

    if (dp[n][S] != -1)
        return dp[n][S];

    if (ar[n - 1] <= S)
    {
        int op1 = subset_sum(n - 1, S - ar[n - 1], ar);
        int op2 = subset_sum(n - 1, S, ar);
        return dp[n][S] = op1 || op2;
    }
    else
    {
        return dp[n][S] = subset_sum(n - 1, S, ar);
    }
}

int main()
{
    int n, X;
    cin >> n >> X;

    memset(dp, -1, sizeof(dp));
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int total = 0;
    for (int child : ar)
    {
        total += child;
    }

    int s1 = (X + total) / 2;

    if (s1 < 0)
        cout << "NO" << endl;
    else if (X > total or (X + total) % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        subset_sum(n, s1, ar);
        if (subset_sum(n, s1, ar))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}