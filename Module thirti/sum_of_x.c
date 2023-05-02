// #include <stdio.h>
// int main ()
// {
//   int arr[5]={1,3,4,7,9};
//   int x=10;
//     for(int i=0;i<4;i++){
//         for(int j=4;j<5;j++){
//        if(i==j){
//         continue;
//        }else{
//         printf("%d %d\n",i,j);
//         arr[i]+arr[j]=x;
//        }
//     }
    
//     }
    
//     return 0;
// }

#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int flag=0;
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
    }int x;
    scanf("%d",&x);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
          a[i]+a[j]==0;
          if(a[i]+a[j]==x){
             flag=1;
          }
        }
    }
    if(flag==0){
      printf("No\n");
    }else{
      printf("Yes\n");
    }
    return 0;
}