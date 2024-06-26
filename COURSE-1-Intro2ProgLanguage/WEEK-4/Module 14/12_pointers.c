#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int x=100;
    int *p = &x;
    // p=500;
    

    printf("x er value = %d\n",x);
    printf("x er addrs = %p\n",&x);
    
    *p = 6050;
    
    printf("p er value = %p\n",p);
    printf("p er addrs = %p\n",&p);
    printf("x er value = %d\n",*p);
    
    return 0;
}