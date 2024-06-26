#include<stdio.h>
#include<string.h>
int main()
{
    char s[1002];
    scanf("%s",s);
    int ans = 0;
    int len = strlen(s);
    int i=0,j=len-1;
    for( i = 0, j=len-1; i<(len/2); i++,j--)
    {
        if(s[i] != s[j])
        {
            ans = 1;
            // break;
        }
    }

    
    // printf("%d\n",ans);
    if(ans==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}