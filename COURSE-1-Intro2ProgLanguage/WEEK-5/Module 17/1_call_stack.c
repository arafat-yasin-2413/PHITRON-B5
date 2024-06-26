#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void world()
{
    printf("World Starts\n");
    printf("World Ends\n");
}

void hello()
{
    printf("Hello Starts\n");
    world();
    printf("Hello Ends\n");

}


int main()
{
    printf("Main Starts\n");
    hello();
    printf("Main Ends\n");
    
    
    return 0;
}