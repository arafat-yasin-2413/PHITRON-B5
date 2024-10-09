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

/*

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
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    ll W;

    cin >> n >> W;

    int ar[n];
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        total += ar[i];
    }

    ll s1 = (W + total) / 2;

    bool dp[n + 1][s1 + 1];

    if ((W + total) % 2 == 1)
    {
        cout << "NO" << endl;
    }

    else
    {
        dp[0][0] = true;
        for (int k = 1; k <= s1; k++)
        {
            dp[0][k] = false;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s1; j++)
            {
                if (ar[i - 1] <= j)
                {
                    bool op1 = dp[i - 1][j - ar[i - 1]];
                    bool op2 = dp[i - 1][j];

                    dp[i][j] = (op1 || op2);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if(dp[n][s1]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= s1; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
// const int N = 21;
// int a[N];

// bool recur(int i, int n, int target, int sum)
// {

//     if (i == n)
//     {
//         if (sum == target)
//             return true;
//         else
//             return false;
//     }

//     bool op1 = recur(i + 1, n, target, sum + a[i]);
//     bool op2 = recur(i + 1, n, target, sum - a[i]);

//     return op1 || op2;
// }

int n;
int ar[21];
int target;

bool creating_expression(int i, int sum)
{
    if(i == n)
    {
        if(sum == target)
            return true;
        else 
            return false;
    }
    bool op1 = creating_expression(i+1,sum + ar[i]);
    bool op2 = creating_expression(i+1,sum - ar[i]);
    return op1 || op2;
}


int main()
{

    int x;
    cin >> n >> x;

    target = x;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    if (creating_expression(1,ar[0]))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}