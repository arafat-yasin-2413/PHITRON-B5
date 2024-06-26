#include<stdio.h>
int main()
{
    int x;
    while (scanf("%d",&x) != EOF)
    {
        if(x!=1999)
        {
            printf("Wrong\n");
        }
        else if(x == 1999)
        {
            printf("Correct\n");
            break;
        }
    }
    
    
    return 0;
}