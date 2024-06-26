#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int my_abs(int x)
{
    if(x<0)
    {
        return x*(-1);
    }
    else 
    {
        return x;
    }
}

int main()
{
    int a;
    scanf("%d",&a);
    int res = my_abs(a);
    printf("%d\n",res);
    
    
    return 0;
}