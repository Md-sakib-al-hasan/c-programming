// #include <stdio.h>
// int main ()
// {    int a=5;
//     for(int i=a;1<=i;i--){
//         for(int j=i;1<j;j--){
//             printf("*");
//         }for(int k=a+(a-i);i<=k;k--){
//             printf("sk");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main ()
// {
//     int a=5;
//     int s=a;
//     for(int i=1;i<=a;i++){
//         for(int j=a;i<j;j--){
//             printf(" ");
//         }
//         for( int k=1;k<=i+(a-s);k++){
//             printf("*");
//         }
//         s--;
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main ()
// {
//     int n=3;
//     int k=1;
//     int s=n-1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=s;j++){
//              printf(" ");
//         }
//         for(int j=1;j<=k;j++){
//             printf("*");
//         }
//         s--;
//         k+=2;
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main ()
{
    int n=5;
    int s=0;
    int k=n+(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        s++;
        k=k-2;
        printf("\n");
    }
    return 0;
}
