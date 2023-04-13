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
   for(int i=0;i<n;i++){
    if(arr[i]<sum){
         sum=arr[i];
    }
   }
   int index=0;
   for(int i=0;i<n;i++){
    if (sum==arr[i])
    {
       index=i;
       break;
    }
    
   }
    printf("%d %d",sum,index+1);
   
    return 0;
   
}