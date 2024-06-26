#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double x;
    scanf("%lf",&x);

    int ans = round(x);
    printf("round of %.2lf is = %d\n",x,ans);

    /*
        দশমিকের পর ৫,৬,৭,৮,৯ থাকলে ceil করে পরের সঙ্খ্যা টাতে যায় 
        দশমিকের পর ০,১,২,৩,৪ থাকলে floor করে। 

        6.01 = 6
        6.499 = 6
        6.588 = 7

    */
    
    return 0;
}