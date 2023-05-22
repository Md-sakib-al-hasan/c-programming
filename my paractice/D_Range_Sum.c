#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        long long int b,c;
        scanf("%lld %lld",&b,&c);
        if(c>b){
        long long int d=(c-b)+1;
          long long int s = (d/2.0)*(2*b+(d-1));
          printf("%lld\n",s);
        }else{
        long long int d=(b-c)+1;
          long long int s = (d/2.0)*(2*c+(d-1));
          printf("%lld\n",s);}

    }
    return 0;
}