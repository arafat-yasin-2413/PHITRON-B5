#include<stdio.h>
int main()
{
    // char a[5] ={'R','a','h','a','t'};

    // char a[5]="Rahat";


    // for(int i=0; i<5; i++)
    // {
    //     printf("%c\n",a[i]);
    // }

    // char a[]="Rahataddd\0";
    // char a[] = "Rahat";
    char a[] ="Rahat\0";
    int sz = sizeof(a)/sizeof(char);
    // printf("%s\n",a[5]);
    printf("%s\n",a[5]);
    printf("%s\n",a[6]);
    
    printf("Size = %d\n",sz);
    
    return 0;
}