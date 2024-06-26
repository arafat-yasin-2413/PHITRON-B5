#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    // int a,b;
    double a,b;
    // scanf("%d%d",&a,&b);
    scanf("%lf%lf",&a,&b);

    double ans = pow(a,b);

    printf("%lf\n",ans);
    /*
        power এর জায়গায় ২ এর চেয়ে বড় কেউ থাকলেই গোলমাল করে।
        এজন্য ans টাকে float/double এ রাখা ভালো। কারণ pow() ফ্লোটিং ভ্যালু রিটার্ন করে। 

    
    */
    return 0;
}