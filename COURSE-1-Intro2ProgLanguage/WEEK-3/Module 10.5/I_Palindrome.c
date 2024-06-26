#include<stdio.h>
#include<string.h>
int main()
{
    char ar[1001];
    scanf("%s",ar);

    // printf("%s\n",ar);
    int len=strlen(ar);

    int i=0,j=len-1;
    int res = 0;
    while(i<j)
    {
        if(ar[i] != ar[j])
        {
            res = 1;
        }
        i++;
        j--;
    }

    // printf("%d\n",res);
    if(res == 0)
    {
        printf("YES\n");
    }
    else if(res == 1)
    {
        printf("NO\n");
    }
    
    return 0;
}