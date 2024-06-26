#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);


    int first_even = (n-20)/5;

    int sec_even = first_even + 2;
    int third_even = first_even + 4;
    int fourth_even = first_even + 6;
    int fifth_even = first_even + 8;

    printf("%d %d %d %d %d\n",first_even,sec_even,third_even,fourth_even,fifth_even);
    
    
    return 0;
}