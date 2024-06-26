#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cycle = 0;
    int full_step = 0;

    for (int i = 0; i < n; i++)
    {
        cycle++;
        cout << endl
             << "cycle " << cycle << " starts i" << endl;
        for (int j = i; j > 0; j--)
        {
            cout << "cycle " << cycle << " starts j" << endl;
            for (int k = j; k > 0; k--)
            {
                full_step++;
                cout << "cycle " << cycle << " starts k" << endl;
                cout << endl
                     << "i = " << i << " , j = " << j << ", k = " << k << endl;
            }
            // cout << endl;
        }
        // cout << "cycle = " << cycle << " complete" << endl;
        cout << "full step = " << full_step << endl;
        cout << "-------------end of full step " << full_step << "-------------" << endl;
    }
    // O(n*n*n)
    

    return 0;
}