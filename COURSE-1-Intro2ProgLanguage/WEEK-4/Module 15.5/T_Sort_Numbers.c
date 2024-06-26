/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    
    int ar[3]={0};
    
    ar[0]= a;
    ar[1]= b;
    ar[2]= c;
    
    
    for(int i=0; i<2; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    
    for(int i=0; i<3; i++)
    {
        printf("%d\n",ar[i]);
    }
    
    printf("\n");
    
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
   

    return 0;
}
