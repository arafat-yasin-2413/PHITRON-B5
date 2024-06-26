#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double x;
    scanf("%lf",&x);

    int ans = ceil(x);
    printf("ans = %d\n",ans);

    /*
        5.000 = 5
        5.000001 = 6
        5.45 = 6

        দশমিকের পর শুন্য ছাড়া অন্য কিছু না থাকলে ইন্টিজার পার্ট টাই হয়।
        এছাড়া দশমিকের পর ০ এর চেয়ে বড় কিছু থাকলেই ইন্টিজার পার্ট এর পরের সঙ্খ্যা টা হয়। 
    */
    
    return 0;
}