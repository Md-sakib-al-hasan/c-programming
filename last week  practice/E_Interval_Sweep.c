#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int odd,even;
    scanf("%d %d",&odd,&even);
    if(abs(odd-even)>=2){
       printf("NO");
    }else{
        if(odd==0 && even ==0){
            printf("NO");
        }else{
            printf("YES");
        }
    }
    return 0;
}