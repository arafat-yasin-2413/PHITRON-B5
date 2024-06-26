#include<stdio.h>
int main()
{
    /*
        int এর সাইজ 4 bytes
        char এর সাইজ 1 byte

    */

    // int a[6];
    //char a[6];
    // printf("%d\n",sizeof(a)/sizeof(int));
    
    char a[5];
    for(int i = 0; i<5; i++)
    {
        scanf("%c",&a[i]);
    }

    for(int i = 0; i<5; i++)
    {
        printf("%c",a[i]);
    }



    return 0;
}