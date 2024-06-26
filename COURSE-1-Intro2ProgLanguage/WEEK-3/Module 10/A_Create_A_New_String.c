#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001], t[1001];
    scanf("%s %s",s,t);

    int lenS = strlen(s);
    int lenT = strlen(t);
    // printf("%s\n%s\n",s,t);

    printf("%d %d\n",lenS,lenT);

    printf("%s %s\n",s,t);

    // char res[2002];
    // for(int i = 0; s[i]!='\0'; i++)
    // {
    //     res[i] = s[i];
    //     // if(s[i]=='\0')
    //     // {
    //     //     res[i] = '\0';
    //     // }
    // }
    // res[lenS] = ' ';
    // int j = lenS+1;
    // for(int i = 0; t[i]!='\0'; i++)
    // {
    //     res[j] = t[i];
    //     j++;
    // }

    // printf("%s\n",res);

    
    
    return 0;
}