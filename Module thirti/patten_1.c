// #include <stdio.h>
// int main ()
// {   int a;
//      scanf("%d",&a);
//     for(int i=0;i<a;i++){
//         for(int j=0;j<=i;j++){
//            printf("*");
//         }
//         printf("\n");    
//     }
//     return 0;
// }
#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    for(int i=a;1<=i;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}