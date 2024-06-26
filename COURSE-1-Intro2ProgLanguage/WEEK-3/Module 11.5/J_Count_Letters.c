#include<stdio.h>
#include<string.h>
int main()
{
    int cnt[26]={0};
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        // printf("%c\n",ch);
        cnt[ch-'a']++;
    }

    for(int i=0; i<26; i++)
    // for(char i = 'a'; i<='z'; i++)
    {
        if(cnt[i] > 0)
        {
            printf("%c : %d\n",i+'a',cnt[i]);
        }
    }
    
    
    return 0;
}