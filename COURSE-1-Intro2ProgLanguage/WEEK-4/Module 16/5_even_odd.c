#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void odd_even()
{
    int n;
    scanf("%d",&n);

    int ar[n];
    int even = 0, odd = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i] % 2 == 0)
        {
            even++;
        }

        else if(ar[i] % 2 != 0)
        {
            odd++;
        }
    }

    printf("%d %d\n",even,odd);


}

int main()
{
    odd_even();
    
    return 0;
}