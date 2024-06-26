#include<stdio.h>
#include<limits.h>
int main()
{
    int n; 
    scanf("%d",&n);

    int mx = INT_MIN;
    for(int i =1; i<=n; i++)
    {
        int x; 
        scanf("%d",&x);
        if(x > mx)
        {
            mx = x;
        }
    }
    printf("%d\n",mx);
    
    return 0;
}