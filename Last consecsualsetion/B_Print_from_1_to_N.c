#include <stdio.h>
int fun(int a) {
    if(a==0) return 0;
   int l=fun(a-1);
   printf("%d\n",a);
}
int main ()
{
    int a;
    scanf("%d",&a);
    fun(a);
    return 0;
}