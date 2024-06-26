#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    // now find the largest value
    int mx = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(ar[i] > mx)
        {
            mx = ar[i];
        }
    }
    
    printf("max = %d\n",mx);

    // int cnt[9]={0};
    int cnt[mx+1];
    for(int i=0; i<mx+1; i++)
    {
        cnt[i] = 0;
    }
    /*
        jokhon count array er size directly bole dibo 
        tokhon ek line ei tar sobgulo ghore zero diye 
        initialize kora jabe. 
        Kintu jokhon maximum number ber kore 
        maximum_number+1 size er counting array declare 
        korbo tokhon ek line a sobgulo ghore value assign 
        kora jabe na. tai eikhetre loop chaliye value assign
        korte hobe.
    */

    // for(int i=0; i<mx+1; i++)
    // {
    //     printf("%d ",cnt[i]);
    // }

    for(int i=0; i<n; i++)
    {
        cnt[ar[i]]++;
    }

    for(int i = 0; i<mx+1; i++)
    {
        printf("i = %d, count = %d\n",i,cnt[i]);
    }

    return 0;
}