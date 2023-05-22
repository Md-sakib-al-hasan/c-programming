#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int k=1;
    int s=a-1;
    for(int i=0;i<a;i++){
         if(i%2==0){

            for(int j=0;j<s;j++){
                printf(" ");
            }
            for(int j=0;j<k;j++){
                printf("^");
            }

         }else{

            for(int j=0;j<s;j++){
                printf(" ");
            }
            for(int j=0;j<k;j++){
                printf("*");
            }



         }
            s--;
            k+=2;
        printf("\n");
    }
    return 0;
}
