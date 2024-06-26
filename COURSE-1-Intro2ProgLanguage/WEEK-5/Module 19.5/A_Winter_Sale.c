#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float x,p;
    scanf("%f %f",&x,&p);

    float original_price = (100*p)/(100-x);
    printf("%.2f\n",original_price);
    
    return 0;
}