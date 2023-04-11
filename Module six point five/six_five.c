#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
     int fir=a%10;
     int sec=a/10;
     if(fir%sec==0 || sec%fir==0){
        printf("YES");
     }else{
        printf("NO");
     }
    return 0;
}