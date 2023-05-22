#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    int count1=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==j){
             count+=arr[i][j];
           }
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(j+i==n-1){
             count1+=arr[i][j];
           }
        }
    }
    int cal=count-count1;
    if(cal<0){
        cal=cal*(-1);
    }
    printf("%d",cal);
    return 0;
}