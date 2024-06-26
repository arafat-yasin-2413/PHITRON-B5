#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int fun(char ar[], int n, int i)
{
    if(n==i) return 0;
    int call = fun(ar,n,i+1);
    if(ar[i] == 'a' || ar[i] == 'e' || ar[i] == 'i'
        || ar[i] == 'o' || ar[i] == 'u' || ar[i] == 'A' || ar[i] == 'E' || ar[i] == 'I'
        || ar[i] == 'O' || ar[i] == 'U')
        {
            return call+1;
        }

    else 
    {
        return call;
    }
}

/*
    fgets(ar,201,stdin) দিয়ে ইনপুট নিলে লাস্ট ইন্ডেক্সে 
    নিউ লাইন ক্যারেক্টার বসে এবং তারপরের ইন্ডেক্সে নাল 
    ক্যারেক্টার বসে। যেমন "Madam" ইনপুট নিলে লাস্ট m এর
    পরের ঘরে নিউ লাইন ক্যারেক্টার বসবে। এবং তারও পরের 
    ঘরে নাল ক্যারেক্টার টা বসবে। 

    * নিউ লাইন ক্যারেক্টার প্রিন্ট করে দেখার জন্য %c ব্যবহার করতে হবে।
    * নাল ক্যারেক্টার প্রিন্ট করে দেখার জন্য %s বা %c ও ব্যবহার করা যায়। 

*/


int main()
{
    char ar[201];
    // scanf("%s",ar);
    fgets(ar,201,stdin);
    // getchar();
    // printf("%s",ar);
    ar[strlen(ar)-1] = '\0';
    // printf("%d\n",strlen(ar));

    // printf("%s",ar[18]);

    int result = fun(ar,strlen(ar),0);
    printf("%d\n",result);
    
    return 0;
}