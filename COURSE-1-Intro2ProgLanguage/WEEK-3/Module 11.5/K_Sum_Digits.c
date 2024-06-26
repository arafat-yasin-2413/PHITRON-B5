#include<stdio.h>
#include<string.h>
int main()
{
    // int n; 
    // scanf("%d",&n);
    // getchar();
    // char ch;
    // int sum = 0;
    // while(scanf("%c",&ch) != EOF)
    // {
    //     // printf("%c\n",ch);
    //     int digit = ch-'0';
    //     sum += digit;
    //     // printf("%d\n",digit);
    // }
    // printf("%d\n",sum);


    int n;
    scanf("%d",&n);

    char ar[n+1];
    scanf("%s",ar);

    // printf("%s\n",ar);
    
    int sum = 0;
    for(int i=0; i<strlen(ar); i++)
    {
        sum += (ar[i]-'0');
    }
    
    printf("%d\n",sum);
    return 0;
}