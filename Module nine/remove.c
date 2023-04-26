#include <stdio.h>
int main ()
{
        int a[6];
        for(int i=0;i<=5;i++){
            scanf("%d",a[i]);
        }
        int inp;
        scanf("%d",inp);
        for(int  i=inp;i<=5;i++){
            a[i]=a[i+1];
        }
        for(int i=0;i<6-1;i++){
            printf("%d ",a[i]);
        }
    return 0;
}