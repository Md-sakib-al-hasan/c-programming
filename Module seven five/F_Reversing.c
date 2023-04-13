#include <stdio.h>
int main ()
{

    int n;
    scanf("%d",&n);
    long  int arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    for(int i=n-1;0<=i;i--){
        printf("%d ",arr[i]);
    }


    return 0;
}
