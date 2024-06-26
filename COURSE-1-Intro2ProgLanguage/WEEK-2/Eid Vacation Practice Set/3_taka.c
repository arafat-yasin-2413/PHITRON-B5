#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d%d",&x,&y);


    int same_money = x-y;

    int rina = same_money/2;
    int mina = rina + y;

    printf("%d %d\n",mina,rina);
    
    return 0;
}