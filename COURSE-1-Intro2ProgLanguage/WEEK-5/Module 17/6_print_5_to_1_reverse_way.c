#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void fun(int i)
{
    if(i==6) return;
    fun(i+1);
    printf("%d\n",i);
}

int main()
{
    fun(1);
    
    
    return 0;
}