#include <stdio.h>
int main ()
{
    int n,sum;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        printf("%d",i);
    }
    for(int i=0;i<n;i++){
        sum=arr[i];
    }
    printf("%d",sum);
    return 0;
}
