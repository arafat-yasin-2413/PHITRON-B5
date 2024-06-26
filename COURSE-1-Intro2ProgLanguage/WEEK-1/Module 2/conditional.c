#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);

    if (tk >= 100)
    {
        printf("Burger Khabo\n");
    }
    else if(tk >= 50)
    {
        printf("Jhalmuri Khabo\n");
    }
    else{
        printf("Kicchu khabo na\n");
    }
    
    return 0;
}