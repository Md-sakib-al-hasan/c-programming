#include <stdio.h>
int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float val=(b*100.0)/(100.0-a);
    printf("%0.2f",val);
    return 0;
}