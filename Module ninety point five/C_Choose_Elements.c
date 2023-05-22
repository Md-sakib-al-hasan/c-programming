#include <stdio.h>
int main ()
{   long long int a,k;
    scanf("%lld %lld",&a,&k);
    long long int ar[a];
    for(long long int i=0;i<a;i++){
        scanf("%lld ",&ar[i]);
    }
    for(long long int i=0;i<a;i++){
        for(long long int j=i+1;j<a;j++){
            if(ar[i]<ar[j]){
                int tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
            }
        }
    }
    long long int sum=0;
    for(long long int i=0;i<k;i++){
        if (ar[i]<0){
            break;
        }
        sum+=ar[i];
    }
    printf("%lld",sum);
    return 0;
}