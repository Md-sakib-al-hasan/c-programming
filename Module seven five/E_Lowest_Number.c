# include <stdio.h>
#include<limits.h>
int main ()
{
    
      int n;
    scanf("%d",&n);
    long  int arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    int sum=INT_MAX;
    int index;
   for(int i=0;i<n;i++){
    if(arr[i]<sum){
         sum=arr[i];
         index=i+1;
    }
   }
   printf("%d %d",sum,index);
   
    return 0;
   
}