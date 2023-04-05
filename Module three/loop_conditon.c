#include <stdio.h>
int main ()
{   int i,n,a;
    scanf("%d %d",&a,&n);
    for (i=a;i<=n;i=i+1)  {
        if (i%2==0){
            printf("%d is even\n",i);

        }
        else{
            printf("%d is odd\n",i);
        }
    }
    return 0;
}