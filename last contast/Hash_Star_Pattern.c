#include <stdio.h>
#include <math.h>
int main ()
{
    int a;
    scanf("%d",&a);
    float b= a;
    int c= floor(b/2);
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(c==j || i==c){
            printf("#");
        }else{
            printf("*");
        }
        }
        printf("\n");
    }
    return 0;
}