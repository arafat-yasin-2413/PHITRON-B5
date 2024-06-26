#include<stdio.h>
int main()
{
    int a, b, c ;
    scanf("%d %d %d",&a,&b,&c);

    int mx, mn;
    if(a >= b && a >= c )
    {
        mx = a;
    }
    else if(b >= a && b >= c)
    {
        mx = b;
    }
    else if(c >= a && c >= b)
    {
        mx = c;
    }

    if (a <= b && a <= c)
    {
        mn = a; 
    }
    else if (b <= a && b <= c)
    {
        mn = b; 
    }
    else if (c <= a && c <= b)
    {
        mn = c;
    }

    printf("%d %d\n",mn,mx);
    
    return 0;
}