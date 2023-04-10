#include <stdio.h>
#include <limits.h>
int main ()
{
    int a,c,store=INT_MIN,store1=INT_MAX;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&c);
        if(store<c){
            store=c;
        }
        if(store1>c){
            store1=c;
        }
    }
    printf("%d %d",store,store1);
    return 0;
}