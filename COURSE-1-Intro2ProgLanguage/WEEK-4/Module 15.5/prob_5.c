#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void swap_it(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("Before swapping\na = %d, b = %d\n",a,b);

    swap_it(&a,&b);

    printf("After Swapping\na = %d, b = %d\n",a,b);
    
    return 0;
}