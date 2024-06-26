#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double x = 5.26;
    double *ptr = &x;
    double *ptr2 = ptr;

    *ptr = 10.20;
    *ptr2 = 1.34;

    printf("x er value = %0.2lf\n",x);
    printf("x er value = %0.2lf\n",*ptr);
    
    return 0;
}