#include <stdio.h>
void even(void){
    int a;
    scanf("%d",&a);
    for(int i=2;i<=a;i+=2){
       printf("%d ",i);
    }
}
int main ()
{
    even();
    return 0;
}
