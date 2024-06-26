#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int N_fact(int x);
int R_fact(int y);
int N_R_fact(int z);


int N_fact(int x)
{
    int i,fact = 1;
    for(i=2; i<=x; i++)
    {
        fact = fact*i;
    }
    return fact;
}


int R_fact(int r)
{
    int i,fact=1;
    for(i=2; i<=r; i++)
    {
        fact = fact*i;
    }
    return fact;
}


int N_R_fact(int nr)
{
    int i, fact= 1;
    for(i = 2; i<=nr; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main()
{
    int n,r;
    // To calculate nCr n and r always must be greater than or equal to zero

    // n,r >= 0
    scanf("%d %d",&n,&r);


    int n_factorial = N_fact(n);
    int r_factorial = R_fact(r);
    int n_r_factorial = N_R_fact(n-r);


    
    printf("(n)Factorial of %d =  %d\n",n,N_fact(n));
    printf("(r)Factorial of %d =  %d\n",r,R_fact(r));
    printf("(n-r)Factorial of %d =  %d\n",n-r,N_R_fact(n-r));

    printf("\n");

    // int nCr = n_factorial/ ((r_factorial)*(n_r_factorial));
    // printf("nCr = %d\n",nCr);

    int nCr = (N_fact(n)) / ((R_fact(r))*(N_R_fact(n-r)));
    printf("nCr = %d\n",nCr);

    //
    return 0;
}