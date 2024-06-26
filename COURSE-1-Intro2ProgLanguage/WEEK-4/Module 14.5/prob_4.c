#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int small_to_capital(char x)
{
    return x-32;
    
}

int main()
{
    char ch;
    scanf("%c",&ch);

    char res = small_to_capital(ch);
    printf("%c\n",res);
    
    return 0;
}