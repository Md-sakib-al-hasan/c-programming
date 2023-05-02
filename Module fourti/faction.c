#include <stdio.h>
int sum(int a,int b){
    int s=a+b;
    return s;
}
int mupti(int x);
int main ()
{
    printf("%d",sum(10,20));
    printf("%d",mupti(15));
    return 0;
}
int mupti(int x){
    int k=x*x;
    return k;
}