#include <stdio.h>
void arr(int a[],int n){
   for(int i=1;i<=n;i++){
    if(i==n){
        printf("%d",i);
    }else{
        printf("%d ",i);
    }
   }
}
int main ()
{
    int a;
    scanf("%d",&a);
    int ar[a];
    arr(ar,a);
    
    return 0;
}