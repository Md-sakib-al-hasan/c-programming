#include <stdio.h>
int sum(){
    int a,b;
    scanf("%d %d",&a,&b);
   return a+b;
}
int main ()
{
    int s=sum();
    printf("%d",s);
    return 0;
}