#include <stdint.h>
int main () 
{   int n,i,sum;
    scanf("%d",&n); 
    for(i=0;i<=n;i++){
        sum+=i;
    }
    printf(" Sum From 1 to %d = %d",n,sum);

    return 0;
}