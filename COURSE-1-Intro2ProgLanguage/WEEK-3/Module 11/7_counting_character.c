#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    // this program works only for small letters
    int cnt[26] = {0};
    // for(int i=0; i<26; i++)
    // {
    //     printf("%d\n",cnt[i]);
    // }

    for (int i = 0; i < strlen(s); i++)
    {
        cnt[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > 0)
        {
            printf("count of %c = %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}