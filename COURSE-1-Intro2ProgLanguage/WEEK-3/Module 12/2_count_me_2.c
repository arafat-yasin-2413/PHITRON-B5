#include<stdio.h>
#include<string.h>
int main()
{
    char ar[100001];
    scanf("%s",ar);

    // printf("%s\n",ar);

    int vowels=0,consonant=0;
    for(int i=0; i<strlen(ar); i++)
    {
        if(ar[i]=='a' || ar[i] == 'e' ||
        ar[i]=='i' || ar[i] == 'o' ||
        ar[i]=='u')
        {
            vowels++;
        }
    }

    // printf("vowels = %d\n",vowels);
    printf("%d\n",strlen(ar)-vowels);
    
    return 0;
}