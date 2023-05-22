#include <stdio.h>
int main ()
{   int n,m;
    scanf("%d %d",&n,&m);
    int ar[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        scanf("%d",&ar[i][j]);
    }
    }
    int a=n-1;
    int b=m-1;
    for(int i=0;i<m;i++){
        printf("%d ",ar[a][i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",ar[i][b]);
    }
    
    return 0;
}