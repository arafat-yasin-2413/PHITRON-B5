#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int even = 0, odd =0, positive=0,negative=0;

    for(int i = 1; i<=n; i++)
    {
        int x ; 
        scanf("%d",&x);
        //if(x%2==0)
        //{
        //    even++;
        //}
        if(x%2!=0)
        {
            odd++;
            printf("odd val = %d\n",x);
        }
        //if(x>0)
        //{
        //    positive++;
        //}
        //if(x<0)
        //{
        //    negative++;
        //}

    }    
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,positive,negative);
    
    return 0;
}