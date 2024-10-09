#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = n;
    int col = n;

    char ar[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(i == 0)
            {
                cout<<j+1;
            }
            else if(i>0 and i<row-1)
            {
                if(j==0)
                {
                    cout<<i+1;
                }
                else if(j>0 and j<col-1)
                {
                    cout<<" ";
                }
                else if(j == col-1)
                {
                    cout<<j+1;
                }
            }
            else if(i == row-1)
            {
                cout<<i+1;
            }
        
        }
        cout<<endl;
    }
    

    return 0;
}