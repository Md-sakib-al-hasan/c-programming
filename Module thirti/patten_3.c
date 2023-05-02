// #include <stdio.h>
// int main ()
// {
//     int a=5;
//     int s=1;
//     for(int i=1;i<=a;i++){
//        for(int j=1;j<=s;j++){
//         printf("%d ",j);
//        }
//        s++;
//        printf("\n"); 
//     }
//     return 0;
// }

#include <stdio.h>
int main ()
{
    int a=5;
    int s=a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=s;j++){
            printf("%d ",j);
        }
        s--;
        printf("\n");
    }
    return 0;
}