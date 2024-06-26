#include<stdio.h>
void swap(int *x,int *y)
{
    int *temp = x;
    *x = *y;
    *y = *temp;

}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    // swap(&a,&b);

    // printf("%d %d\n",a,b);

    printf("a er address %p\n",&a);
    // printf("b er address %p\n",&b
    return 0;
}