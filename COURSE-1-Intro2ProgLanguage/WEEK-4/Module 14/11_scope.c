#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int x = 100;
void fun()
{
    printf("from fun = %d\n",x);
}

int main()
{
    printf("from main = %d\n",x);

    fun();
    
    return 0;
}