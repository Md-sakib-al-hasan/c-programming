#include <stdio.h>
int main ()
{  int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       if(i%5==0){
        printf("%d yes",i);
       }else{
        printf("%d No",i);
       }
    }
    return 0;
}