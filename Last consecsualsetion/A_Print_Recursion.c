#include <stdio.h>
void fun(int a){
    if(a==0)return ;
    printf("I love Recursion\n");
    fun(--a);
}
int main ()
{
    int a;
    scanf("%d",&a);
    fun(a);
    return 0;
}
