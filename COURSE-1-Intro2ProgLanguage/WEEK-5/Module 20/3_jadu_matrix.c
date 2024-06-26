#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int ar[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    if (row != col) // row, col jodi soman na hoy
    {
        printf("NO\n");
    }

    else // row, col jodi soman hoy
    {
        int flag = 0;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == j)
                {
                    if (ar[i][j] == 1)
                    {
                        continue;
                    }

                    if (ar[i][j] != 1)
                    {
                        flag = 1;
                    }
                }

                if (i + j == row - 1)
                {
                    if (ar[i][j] == 1)
                    {
                        continue;
                    }

                    if (ar[i][j] != 1)
                    {
                        flag = 1;
                    }
                }

                if (ar[i][j] != 0)
                {
                    flag = 1;
                }
            }
        }

        // printf("%d\n", flag);
        if(flag == 0)
        {
            printf("YES\n");
        }

        else if(flag == 1)
        {
            printf("NO\n");
        }
    }

    return 0;
}