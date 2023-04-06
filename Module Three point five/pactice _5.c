#include <stdio.h>
int main ()
{  int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%i ",i);
       if(i%5==0){
        printf("yes");
       }else{
        printf("No");
       }
    }
    return 0;
}