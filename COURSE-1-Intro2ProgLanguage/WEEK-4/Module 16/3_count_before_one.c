#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


int count_before_one(int ar[], int sz)
{
    int cnt = 0;
    for(int i=0; i<sz; i++)
    {
        if(ar[i] != 1)
        {
            cnt++;
        }
        else if(ar[i] == 1)
        {
            return cnt;
        }
    }

    // return;

}

int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    int res = count_before_one(ar,n);
    printf("%d\n",res);
    
    return 0;
}