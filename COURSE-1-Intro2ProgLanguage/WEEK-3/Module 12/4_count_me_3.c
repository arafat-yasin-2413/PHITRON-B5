#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char ar[10001];
        scanf("%s", ar);

        int capital = 0, small = 0, digit = 0;
        for (int i = 0; i < strlen(ar); i++)
        {
            if (ar[i] >= 'A' && ar[i] <= 'Z')
            {
                capital++;
            }
            else if (ar[i] >= 'a' && ar[i] <= 'z')
            {
                small++;
            }
            else if (ar[i] >= '0' && ar[i] <= '9')
            {
                digit++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);
    }

    

    return 0;
}