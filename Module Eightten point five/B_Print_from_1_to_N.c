#include <stdio.h>
void fun(int a,int i){
   
   printf("%d\n",i);
   if(i==a) return ;
   fun(a ,i+1);
}
int main ()
{
    int a;
    scanf("%d",&a);
    fun(a,1);
    return 0;
}