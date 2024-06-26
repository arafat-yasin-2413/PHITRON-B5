/*


#include<stdio.h>
#include<limits.h>
int main()
{
    int n, m;
    scanf("%d%d",&n,&m);
    int ar[n];
    int cnt[100001] = {0};

    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        cnt[ar[i]]++;
    }


    for(int i=1; i<=m; i++)
    {
        printf("%d\n",cnt[i]);
    }
    
    return 0;
}


*/


#include<stdio.h>
#include<limits.h>
int main()
{
    int n, m;
    scanf("%d%d",&n,&m);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    int mx = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(ar[i]>mx)
        {
            mx = ar[i];
        }
    }

    // printf("%d\n",mx);
    int cnt[mx+1];
    for(int i=0; i<=mx; i++)
    {
        cnt[i] = 0;
    }


    for(int i=0; i<n; i++)
    {
        cnt[ar[i]]++;
    }


    // for(int i=0; i<=mx; i++)
    // {

    //     printf("%d -> %d\n",i,cnt[i]);
    // }

    for(int i=1; i<=m; i++)
    {
        // printf("%d\n",cnt[i]);
        printf("%d occurs %d times\n",i,cnt[i]);
    }
    
    return 0;
}