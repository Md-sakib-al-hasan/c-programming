#include <stdio.h>
int my_abs(int x){
    if(0>x){
        x=x*-1;
    }
    return x;
}
int main ()
{   int a;
    scanf("%d",&a);
    printf("%d",my_abs(a));
    return 0;
} 