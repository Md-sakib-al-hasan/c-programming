#include <stdio.h>
int main ()
{  int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",i);
       if(i%5==0){
        printf("Yes\n");
       }else{
        printf("No\n");
       }
    }
    return 0;
}