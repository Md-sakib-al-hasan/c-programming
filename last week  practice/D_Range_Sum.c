#include <stdio.h>
int main ()
{   int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int sum=0;
        for(int i=a;i<=b;i++){
            sum+=i;
        }
        printf("%d\n",sum);
    }
    }
    return 0;
}