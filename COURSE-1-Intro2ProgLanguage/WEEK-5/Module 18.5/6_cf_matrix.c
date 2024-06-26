#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n; 
    scanf("%d",&n);

    int row = n;
    int col = n;

    int ar[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }

    int sum_of_primary = 0;
    int sum_of_secondary = 0;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i==j)
            {
                sum_of_primary += ar[i][j];
            }

            if(i+j == n-1)
            {
                sum_of_secondary += ar[i][j];
            }
        }
    }


    // printf("sum of primary = %d\n",sum_of_primary);
    // printf("sum of secondary = %d\n",sum_of_secondary);

    
    printf("%d\n",abs((sum_of_primary - sum_of_secondary)));

    
    return 0;
}