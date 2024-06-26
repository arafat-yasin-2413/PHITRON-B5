#include<stdio.h>
int main()
{
    char x ; 
    scanf("%c",&x);

    int var = x;
    // printf("%d\n",var);

    if (x >= 48 && x <= 57)
    {
        printf("IS DIGIT\n");
    }

    else if(x >= 'A' && x <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL\n");
    }

    else if(x >= 'a' && x <= 'z')
    {
        printf("ALPHA\nIS SMALL\n");
    }
    
    return 0;
}