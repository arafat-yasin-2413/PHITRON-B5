#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int my_len(char array[])
{
    int len = 0;
    int i=0;
    while(array[i] != '\0')
    {
        len++;
        i++;
    }

    // printf("len inside func = %d\n",len);
    return len;
}

int main()
{
    char ar[100];
    scanf("%s",ar);
    int res = my_len(ar);
    printf("%d\n",res);
    
    
    return 0;
}