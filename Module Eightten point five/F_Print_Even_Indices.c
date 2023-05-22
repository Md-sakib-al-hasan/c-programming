#include <stdio.h>
void fun(int arr[],int i){
    if(i%2==0){
        printf("%d ",arr[i]);
        if(i==0)return;
        fun(arr,i-1);
    }else{
        fun(arr,i-1);
    }
}
int main ()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
     fun(arr,a-1);
    return 0;
}