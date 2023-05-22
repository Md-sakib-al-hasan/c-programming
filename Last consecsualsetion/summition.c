#include <stdio.h>
void fun(int ar[],int i){
    if(i==0){
        printf("%d ",ar[i]);
        return ;
    }
    fun(ar,i-1);
    printf("%d ",ar[i]);
}
int main ()
{
    int a;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++){
        scanf("%d",&ar[i]);
    }
    fun(ar,a-1);
    return 0;
}