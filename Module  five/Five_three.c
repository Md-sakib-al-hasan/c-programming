# include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int dev= a/1000;
    if(dev%2==0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}
