#include <stdio.h>
#include <math.h>
#include <string.h>
long long int result = 0;
long long int fun(long long int a[] , int n,int start,long long int sum ) {
    if (start == n+1) return 0 ;
    sum = sum + a[start] ;
    result = fun(a,n,start+1,sum);
    return result + sum - sum ; 
    
   
   
}
int main () {
    int n ;
    scanf("%d",&n);
    long long int a[n] ;
    for ( int i = 0 ; i < n ; i++) {
        scanf("%lld",&a[i]);
    }

    long long int sum = fun(a,n-1,0,0);
    printf("%lld\n",sum);




    return 0 ;
}