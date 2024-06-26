#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
 
    int row,col;
    scanf("%d%d",&row,&col);


    
    int ar[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }

    int element = row*col;
    int cnt = 0;
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(ar[i][j] == 0)
            {
                cnt++;
            }
        }
    }

    printf("%d\n",cnt);

    if(cnt == element)
    {
        printf("It is a Zero/Null Matrix\n");
    }

    else 
    {
        printf("It is not Zero/Null Matrix\n");
    }



    return 0;
}