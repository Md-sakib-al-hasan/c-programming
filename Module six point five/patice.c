#include <stdio.h>
int main ()
{
    int n = 400;
    while (n != 0)
    {
       int sm=n%10;
       int d=n/10;
       printf("%d ",sm);
    }
    
    return 0;
}