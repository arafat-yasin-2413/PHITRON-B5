#include <bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int> &vec, int n)
{
    cout << "Printing the passed vector from main" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    vector<int> pref(n);
    pref[0] = vec[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + vec[i];
    }

    return pref;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    vector<int> result = fun(v1, n);

    cout << "printing the pref sum vec from main " << endl;

    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}