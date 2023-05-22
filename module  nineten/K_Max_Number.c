#include <stdio.h>
#include <limits.h>
long long int fun(long long int a[],int n,int i){
     if(i==n+1) return INT_MIN ;
     long long int l=fun(a,n,i+1);
     if(l<a[i]){
        l=a[i];
        return l;
     }else{
        return l;
     } 
}
int main ()
{
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    long long int x=fun(a,n-1,0);
    printf("%lld",x);
    return 0;
}
