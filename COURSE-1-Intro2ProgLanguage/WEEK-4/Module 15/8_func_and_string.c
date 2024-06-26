#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void fun(char ar[])
{
    printf("%d\n",strlen(ar));
    char n[] = 'World';
    return n;
}

int main()
{
    char ar[20] = "Hello";
    fun(ar);
    
    
    return 0;
}