#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    char digit[n];
    for(int i=0;i<=n;i++){
        scanf("%c",&digit[i]);
        // printf("%d\n",digit[i]);

    }
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+(digit[i]-48);
    }
    printf("%d",sum);
    return 0;
}