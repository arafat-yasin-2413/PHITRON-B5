#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d%d",&x,&y);

    // printf("%d %d",x,y);
    int sum_op = x+y;
    int subtract = x-y;
    int mult = x * y;
    float div = x*1.0/y;
    printf("%d + %d = %d\n",x,y,sum_op);
    printf("%d - %d = %d\n",x,y,subtract);
    printf("%d * %d = %d\n",x,y,mult);
    printf("%d / %d = %.2f\n",x,y,div);
    
    return 0;
}