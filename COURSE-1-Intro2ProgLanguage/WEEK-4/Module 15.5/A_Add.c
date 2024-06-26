#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int fun(int x,int y)
{
    int sum = x+y;
    return sum;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",fun(a,b));
    
    return 0;
}