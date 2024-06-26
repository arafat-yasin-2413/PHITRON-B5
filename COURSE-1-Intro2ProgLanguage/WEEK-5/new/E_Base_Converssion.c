/*
void binary(int n){
	if(n == 0){
		return;
	}
	binary(n / 2);
	printf("%d",n%2);
	
}
int main()
{
    int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		binary(n);
		printf("\n");
	}

    return 0;
}
*/


#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void fun(int n)
{
    if(n==0) return;
    fun(n/2);
    printf("%d",n%2);
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int x;
        scanf("%d",&x);
        fun(x);
        printf("\n");

    }

    
    return 0;
}