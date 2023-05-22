#include <stdio.h>
int main ()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int s = a*b;
    printf("%lld + %lld = %lld\n",a,b,a+b);
    printf("%lld * %lld = %lld\n",a,b,s);
    printf("%lld - %lld = %lld\n",a,b,a-b);
    return 0;
}

