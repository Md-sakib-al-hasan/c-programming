#include <stdio.h>
int main ()
{
      int N;
    scanf("%d",&N);
    int arr[N];
    for (int i =0;i<N;i++)
    {
        scanf("%d ",&arr[i]);
    }
     int inp,inpv;
    scanf("%d %d",&inp,&inpv);
     for(int i=0;i<N;i++){
        if(i==inp){
            arr[i]=inpv;
        }
    }
    for(int i=N-1;0<=i;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
