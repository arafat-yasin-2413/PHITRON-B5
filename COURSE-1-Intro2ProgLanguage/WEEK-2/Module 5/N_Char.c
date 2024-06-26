#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);

    int val = x;
    // printf("%d\n",val);
    // if (val >= 65 && val <= 90)
    if(x >= 'A' && x <= 'Z')
    {
        x = x + 32;
        printf("%c\n",x);
    }

    else if(x >= 'a' && x <= 'z')
    {
        x = x - 32;
        printf("%c\n",x);
    }
    
    return 0;
}