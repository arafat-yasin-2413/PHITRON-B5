#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[101];
        scanf("%s", s);
        // printf("%s\n",s);
        int len = strlen(s);
        // printf("%d\n",len);
        if (len > 10)
        {
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
        }
        else
        {
            printf("%s\n", s);
        }
    }

    return 0;
}