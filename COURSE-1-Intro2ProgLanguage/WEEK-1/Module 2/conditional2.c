#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);

    if (tk >= 5000)
    {
        printf("Cox's Bazar Jabo\n");

        if (tk >= 10000)
        {
            printf("Saint Martin o Jabo\n");
        }
        else 
        {
            printf("Basay Ferot jabo\n");
        }
    }

    else 
    {
        printf("Kothaw Jabo na\n");
    }
    
    
    return 0;
}