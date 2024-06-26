#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int fun(char ar[],int i)
{
    if(ar[i] == '\0') return 0;
    int len = fun(ar,i+1);
    return len+1;
}

int main()
{
    char ar[20] = "hellogelo";
    // printf("%s\n",ar);
    int length = fun(ar,0);
    printf("%d\n",length);
    
    return 0;
}