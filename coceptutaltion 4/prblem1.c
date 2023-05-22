#include <stdio.h>
int sum(int a){
   int last=a%10;
   int first=a/1000;
   return last+first;
}
int main ()
{
    int a;
    scanf("%d",&a);
    int s=sum(a);
    printf("sum = %d",s);
    return 0;
}