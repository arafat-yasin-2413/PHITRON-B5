#include <stdio.h>
#include<limits.h>
void get_min_max(int n)
{
    int ar[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    
    int mx = INT_MIN;
    int mn = INT_MAX;
    
    for (int i=0; i<n; i++)
    {
        if(ar[i] > mx)
        {
            mx=ar[i];
        }
        
        if(ar[i] < mn)
        {
            mn = ar[i];
        }
    }
    
    printf("%d ",mn);
    printf("%d\n",mx);
}
int main()
{
    int n;
    scanf("%d",&n);
    get_min_max(n);
    

    return 0;
}