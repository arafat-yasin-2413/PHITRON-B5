#include<stdio.h>
int main()
{
    // char x = 'A';
    // printf("%d\n",x);
    

    char ch;
    while(scanf("%c",&ch) != EOF)
    {
        // printf("%c\n",ch);
        if (ch == ',')
        {
            printf(" ");
        }
        if(ch>='a' && ch<='z')
        {
            printf("%c",ch-32);
        }
        else if(ch>='A' && ch<='Z')
        {
            printf("%c",ch+32);
        }
    }
    
    return 0;
}