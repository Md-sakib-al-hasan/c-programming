#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int s=a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=s;j++){
            printf("*");
        }
        s--;
        printf("\n");
    }
    return 0;
}