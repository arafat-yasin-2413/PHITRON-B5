#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);

    int a[n];
    

    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&m);
    int b[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }

    int ans[n+m];
    for(int i=0; i<n; i++)
    {
        ans[i]=a[i];
    }

    int i = n, j;
    for(j = 0; j<m; j++)
    {
        ans[i] = b[j];
        i++;
    }

    for(int k = 0; k<n+m; k++)
    {
        printf("%d ",ans[k]);
    }
    
    return 0;
}