#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    // int space = n-1;
    // int star = 1;
    int space=0;
    int star=2*n-1;

    for(int i=1; i<=n; i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int j=1; j<=star; j++)
        {
            printf("*");
        }
        printf("\n");
        // space--;
        // star+=2;
        space++;
        star-=2;
    }
    
    return 0;
}

/*
input n
k = n
outer loop (i=1 theke i<=n)
inner loop (j=k theke j>=1, j--)
inner loop er kaj sesh a k--
*/