#include <stdio.h>
int fun(int a) {
    
    if(a==1){
       printf("%d",a);
       return 0;
    }
    printf("%d ",a);
   int l=fun(a-1);
}
int main ()
{
    int a;
    scanf("%d",&a);
    fun(a);
    return 0;
}