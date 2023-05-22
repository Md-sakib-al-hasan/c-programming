#include <stdio.h>
void count_odd(int a[],int n){

    a[n-1]=100;
}
int main ()
{   int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
//   int a[10]={1,2,3,4,5,6,7,8,9,0};
//   int n=10;
  count_odd(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
