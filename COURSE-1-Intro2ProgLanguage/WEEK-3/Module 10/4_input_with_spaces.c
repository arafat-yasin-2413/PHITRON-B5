#include<stdio.h>
#include<string.h>
int main()
{
    // gets(name_of_the_string)
    // fgets(name,size,stdin)
    
    char a[10];
    // gets(a);
    // printf("%s\n",a);  


    // scanf, gets - এরা Enter তথা new line ইনপুট নেয় না। 
    // fgets - Enter বা new line ইনপুট নেয় 

    char b[100];
    fgets(b,19,stdin);
    a[17]='\0';
    printf("%s\n",b);
    // printf("b[17] %s\n",b[17]);
    // printf("b[18] %s\n",b[18]);
    // printf("b[19] %s\n",b[19]);

    
    return 0;
}