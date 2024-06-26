#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    scanf("%s%s",a,b);

    // 1st parameter = destination string
    // 2nd parameter = source string
    strcat(b,a);
    printf("%s %s\n",a,b);
    
    return 0;
}