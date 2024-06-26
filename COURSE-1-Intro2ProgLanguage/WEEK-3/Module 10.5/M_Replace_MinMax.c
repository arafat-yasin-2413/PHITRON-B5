#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    int mn = ar[0];
    int mx = ar[0];
    int pos_mn=0, pos_mx=0;
    /*
        যদি সবচেয়ে ছোট ভ্যালু টা কিংবা সবচেয়ে বড় ভ্যালু টা একদম শুরুতে থাকে তাহলে 
        তো লুপের ভিতর যেয়ে কোনো if condition ই চেক করবে না। অর্থাৎ সেক্ষেত্রে 
        position টা আমরা জানতে পারবো না। Position Garbage ই থেকে যেত। তাই 
        উপরে প্রথম ইন্ডেক্স টা পজিশনে অ্যাসাইন করে দেওয়া হয়েছে। আর গুরুত্বপূর্ণ কথা 
        হলো এখানে ইনপুটে আসা প্রত্যেক্টা এলিমেন্ট হবে distinct. মানে একই ভ্যালু 
        দ্বিতীয়বার আসবে না। 
    */

    for(int i=0; i<n; i++)
    {
        if(ar[i] < mn)
        {
            mn = ar[i];
            pos_mn=i;
        }

        if(ar[i] > mx)
        {
            mx = ar[i];
            pos_mx = i;
        }
    }

    // printf("mn = %d, idx = %d\n",mn,pos_mn);
    // printf("mx = %d, idx = %d\n",mx,pos_mx);

    ar[pos_mn] = mx;
    ar[pos_mx] = mn;

    for(int i=0; i<n; i++)
    {
        printf("%d ",ar[i]);
    }


    
    return 0;
}