#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    while (a--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==b){
            printf("Square\n");
        }else{
            printf("Rectangle\n");
        }
    }
    
    return 0;
}