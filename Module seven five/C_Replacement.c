#include <stdio.h>
int main ()
{
    int n,s;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    if (0>arr[i])
    {
        printf("2 ");
    }else if (arr[i]==0)
    {
        printf("0 ");
    }
    
    else{
        printf("1 ");
    }
    
}
    return 0;
}