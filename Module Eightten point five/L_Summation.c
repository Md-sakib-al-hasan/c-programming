#include <stdio.h>
void fun(long long int arr[],int a,long long int i){
    i+=arr[a];
    if(a==0){
        printf("%lld",i);
        return;
    }else{
        fun(arr,a-1,i);
    }
    
    
}
int main ()
{
    int a;
    scanf("%d",&a);
    long long int arr[a];
    for(int i=0;i<a;i++){
        scanf("%lld",&arr[i]);
    }
    fun(arr,a-1,0);
    return 0;
}