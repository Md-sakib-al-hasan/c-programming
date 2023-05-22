#include <stdio.h>
long long int fun(long long int ar[],int i){
    if(i==0) return ar[i];
    long long int l = fun(ar,i-1);
    return l+ar[i];
}
int main ()
{
    int a;
    scanf("%d",&a);
    long long int ar[a];
    for(int i=0;i<a;i++){
        scanf("%lld",&ar[i]);
    }
   long long int s= fun(ar,a-1);
   printf("%lld",s);
    return 0;
}