#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);

    int space = n-1;
    int character = 1;

    for(int i=1; i<=(2*n)-1; i++)
    {
        // printf("line %d\n",i);
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=character; j++)
        {
            // printf("*");
            if(i%2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }

        printf("\n");
        if(i<n)
        {
            space--;
            character+=2;
        }

        else
        {
            space++;
            character-=2;
        }
    }
    
    return 0;
}