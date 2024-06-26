#include<stdio.h>
int main()
{
    long long int eye,mouth,body;
    scanf("%lld %lld %lld",&eye,&mouth,&body);

    long long int count = 0;
    if(eye == 0 || body==0)
    {
        count = 0;
    }

    else
    {
        long long int mn = eye;
        if(mouth<mn)
        {
            mn = mouth;
        }
        else if(body < mn)
        {
            mn = body;
        }

        count += mn;
        eye = eye -mn;
        mouth = mouth -mn;
        body = body -mn;

        if(eye/2 < body)
        {
            count += eye/2;
            //body = body - eye/2;
        }
        else 
        {
            count += body;
        }
    }


    printf("%lld\n",count);
    
    
    return 0;
}