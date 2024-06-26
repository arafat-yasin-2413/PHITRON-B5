#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int is_palindrome(char str[])
{
    // printf("%s\n",str);
    int len = strlen(str);
    int flag = 0;

    
    int i=0;
    int j=len-1; 
    while(i<j)
    {
        if(str[i] != str[j])
        {
            flag = 1;
        }
        i++;
        j--;
    }

    // printf("value of flag = %d\n",flag);
    if(flag==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

    
}

int main()
{
    char ar[1001];
    scanf("%s",ar);

    int res = is_palindrome(ar);

    // printf("%d\n",res);    
    if(res == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    
    return 0;
}