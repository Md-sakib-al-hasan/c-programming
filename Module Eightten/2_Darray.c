#include <stdio.h>
int main ()
{
    int a[5][2];
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            printf("%d",a[i][j]);
        }
    }

    printf("\n");
    printf("%d",a[4][0]);
    return 0;
}