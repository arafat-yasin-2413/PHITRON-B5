#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void s(int n, int m, int a[n][m], int b[n][m], int sm[n][m], int i, int j)
{
    if (i == n)
        return;
    for (j = 0; j < m; j++)
    {
        sm[i][j] = a[i][j] + b[i][j];
    }
    s(n, m, a, b, sm, i + 1, j);
}

int main()
{
    // This is recursive approach of this Problem
    // Sum of a Matrix

    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m], b[n][m], sm[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    s(n, m, a, b, sm, 0, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", sm[i][j]);
        }
        printf("\n");
    }

    return 0;
}