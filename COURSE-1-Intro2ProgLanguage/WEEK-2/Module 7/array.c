#include<stdio.h>
int main()
{
    // int ar[5]={13,45,8,3,56};
    // printf("%d",ar[1]);

    int n; 
    scanf("%d",&n);
    int ar[n];

    for(int i = 0; i<n; i++)
        scanf("%d",&ar[i]);
    
    for(int i = 0; i<n; i++)
    {
        printf("%d\n",ar[i]);
    }
    
    
    return 0;
}