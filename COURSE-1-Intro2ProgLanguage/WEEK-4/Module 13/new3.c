#include<stdio.h>
int main()
{
    int x=100;
    int *ptr = &x;
    x=200;

    printf("address of x = %p\n",&x);
    printf("value of ptr = %p\n",ptr);
    printf("address of ptr = %p\n",&ptr);
    printf("size of ptr = %d\n",sizeof(ptr));
    
    return 0;
}