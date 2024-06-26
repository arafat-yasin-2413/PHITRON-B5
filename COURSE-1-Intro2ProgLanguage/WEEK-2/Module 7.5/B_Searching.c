#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    int ar[n];

    for(int i = 0; i<n; i++)
        scanf("%d",&ar[i]);
    
    int x; 
    scanf("%d",&x);

    int pos = -2;
    for(int i =0; i<n; i++)
    {
        if(ar[i] == x)
        {
            pos = i;
            break;
        }
    }

    if(pos <0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n",pos);
    }




    return 0;
}