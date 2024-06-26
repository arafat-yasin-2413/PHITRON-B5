#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);

    int pos_sum = 0;
    int neg_sum = 0;

    int ar[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int i = 0; i<n; i++)
    {
        if(ar[i] > 0)
        {
            pos_sum += ar[i];
        }
        else if(ar[i] < 0)
        {
            neg_sum += ar[i];
        }
    }


    printf("%d %d\n",pos_sum,neg_sum);

    


    
    return 0;
}