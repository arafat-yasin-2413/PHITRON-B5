#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    printf("x er value = %d\n",x);
    // x = 200;
    *ptr = 200;
    
    printf("x er value = %d\n",x);
    printf("x er value = %d\n",*ptr);
    
    return 0;
}