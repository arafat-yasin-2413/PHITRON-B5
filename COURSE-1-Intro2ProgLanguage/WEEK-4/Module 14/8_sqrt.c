#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    // int x;
    double x;
    // scanf("%d",&x);
    scanf("%lf",&x);

    double ans = sqrt(x);
    printf("%lf\n",ans);
    
    return 0;
}