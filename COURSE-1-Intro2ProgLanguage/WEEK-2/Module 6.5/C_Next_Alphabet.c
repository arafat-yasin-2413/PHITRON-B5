#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);

    if (x == 'z')
    {
        printf("a\n");
    }

    else
    {
        x = x + 1;
        printf("%c\n", x);
    }
    return 0;
}