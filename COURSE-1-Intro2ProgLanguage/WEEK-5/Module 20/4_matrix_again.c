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

    for(int j=0; j<col; j++)
    {
        printf("%d ",ar[row-1][j]);
    }
    printf("\n");

    for(int i=0; i<row; i++)
    {
        printf("%d ",ar[i][col-1]);
    }
    printf("\n");
    
    return 0;
}