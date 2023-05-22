#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int ar[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int flag=1;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i==j && ar[i][j]!=ar[0][0]){
                    flag=0;
               break;
            }
            if(ar[i][j]!= 0 && i!=j){
                    flag=0;
                    break;
            }
        }
        
    }
    if(flag==1){
        printf("yes");
    }else{
        printf("no");
    }

    return 0;
}