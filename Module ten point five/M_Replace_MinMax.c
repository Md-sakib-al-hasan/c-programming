#include <stdio.h>
#include<limits.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

  int min=INT_MAX;
  int minin=0;
  for(int i=0;i<N;i++){
    if (min>arr[i])
    {
        min=arr[i];
        minin=i;
    }
    
  }

   int max=INT_MIN;
   int maxin=0;

  for(int i=0;i<N;i++){
    if (max<arr[i])
    {
        max=arr[i];
        maxin=i;

    }
    
  }

  
arr[minin]=max;
arr[maxin]=min;



    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}