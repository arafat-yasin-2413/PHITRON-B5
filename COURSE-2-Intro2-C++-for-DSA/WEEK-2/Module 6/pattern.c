#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    /*
    
    star = 1
    star = 2
    star = 3
    star = 4

    *
    **
    ***
    ****


    1. koyta line niye kaj korbo
    2. proit ta line a ki kaj korte jachchi seta thik korbo
    3. star er sonkhya  

    */

    int n;
    scanf("%d",&n);


    int star = 1;
                
    for(int i=1; i<=n; i++)
    {                       
        for(int j = 1; j<=star ; j++)
        {
            printf("*");
        }
        printf("\n");
        star = star + 1; // 5
    }


   
    
    
    return 0;
}