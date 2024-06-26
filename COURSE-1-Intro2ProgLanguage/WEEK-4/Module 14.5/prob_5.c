#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int capital_to_small(char x)
{
    return x+32;
    
}

int main()
{
    char ch;
    scanf("%c",&ch);

    char res = capital_to_small(ch);
    printf("%c\n",res);
    
    return 0;
}