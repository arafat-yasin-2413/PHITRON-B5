#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000001];
    scanf("%s",a);

    // printf("%s\n",a);
    int sum = 0;
    // for(int i=0; a[i]!='\0'; i++)
    for(int i=0; i<strlen(a); i++)
    {
        int digit = a[i]-'0';
        sum += digit;
    }

    printf("%d\n",sum);
    
    return 0;
}