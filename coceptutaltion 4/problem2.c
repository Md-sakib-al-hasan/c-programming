#include <stdio.h>
 void positive_a(int a){
    for(int i=a;(a*(-1))<=i;i--){
        printf("%d ",i);
    }
 }
 void negitive_a(int a){
     for(int i=a;(a*(-1))>=i;i++){
        printf("%d ",i);
    }
 }
int main ()
{
    int a;
    scanf("%d",&a);
    if(a>0){
        positive_a(a);
    }else{
        negitive_a(a);
    }
    return 0;
}
