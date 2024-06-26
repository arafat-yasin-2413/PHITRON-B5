#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int digit1 = n%10; // 0
    n = n/10; // 1

    if(digit1%n == 0 || n%digit1 == 0)
    // if(n%digit1 == 0 || digit1%n == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    // int a = 6;
    // int b = 0;

    // printf("%d\n",a%b);
    // printf("%d\n",b%a);
    
    return 0;
}