#include <stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    if(0<N){
        for(int i=1;i<=N;i++ ){
        printf("%d ",i);
    }
    }else{
    for(int i=N;1>=i;i++){
        printf("%d ",i);
    }
    }

    return 0;
}
