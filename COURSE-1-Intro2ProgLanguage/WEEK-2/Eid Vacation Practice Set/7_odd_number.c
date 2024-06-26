#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);

    int first_num = (n-12)/4;
    int second_num = first_num + 2;
    int third_num = first_num + 4;
    int fourth_num =first_num + 6;

    printf("%d %d %d %d\n",first_num, second_num, third_num,fourth_num);
    


    return 0;
}