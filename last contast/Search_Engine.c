#include <stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int ar[n];
        for(int j=0;j<n;j++){
            scanf("%d",&ar[j]);
        }
        int s;
        int g=1;
        scanf("%d",&s);
        
        for(int j=0;j<n;j++){
            if(ar[j]==s){
                printf("Case %d: %d",i+1,j+1);
                g=0;
                break;
            }
        }
        if(g==1){
            printf("Case %d: Not Found",i+1);
        }
        printf("\n");

    }
    return 0;
}