#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);

    int rev = 0;

    while(n!=0)
    {
        int remainder = n%10;
        n=n/10;
        rev = rev * 10 + remainder;

    }
    printf("%d\n",rev);
    
    return 0;
}