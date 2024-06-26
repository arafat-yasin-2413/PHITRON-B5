#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int char_to_ascii(char x)
{
    // printf("%c\n",x);
    if(x >= 'a' && x<= 'z')
    {
        int ascii_val = x;
        // printf("%d\n",ascii_val);
        return ascii_val;
    }

    if(x >= 'A' && x<= 'Z')
    {
        int ascii_val = x;
        return ascii_val;
    }

    if(x >= '0' && x<= '9')
    {
        int ascii_val = x;
        return ascii_val;
    }
}

int main()
{
    char ch;
    scanf("%c",&ch);

    int res = char_to_ascii(ch);
    printf("%d\n",res);
    
    return 0;
}