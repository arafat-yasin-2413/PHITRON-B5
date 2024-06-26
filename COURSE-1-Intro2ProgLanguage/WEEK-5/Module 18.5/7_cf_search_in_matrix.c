#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int row,col; 
    scanf("%d %d",&row,&col);


    int ar[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }

    int x;
    scanf("%d",&x);

    int flag = 0;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if (ar[i][j] == x)
            {
                flag = 1;
            }           
        }
    }

    // printf("%d\n",flag);
    if(flag == 1)
    {
        printf("will not take number\n");
    }

    else if(flag == 0)
    {
        printf("will take number\n");
    }


    
    return 0;
}