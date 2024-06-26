#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double x;
    scanf("%lf",&x);

    int ans=floor(x);
    printf("floor of %.2lf is = %d\n",x,ans);

    /*
        5.0 = 5
        5.01 = 5
        5.99 = 5
    */
    
    return 0;
}