#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    int ar[n];
    
    int divided_by_two = 0, divided_by_three = 0;

    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        
        if(ar[i] % 2 == 0 || (ar[i] % 2 == 0 && ar[i] % 3 == 0))
        {
            divided_by_two++;
        }
        else if(ar[i] % 3 == 0)
        {
            divided_by_three++;
        }
    }

    printf("%d %d\n",divided_by_two,divided_by_three);

    
    
    return 0;
}