// #include <stdio.h>
// int main ()
// {
//     int a;
//     scanf("%d",&a);
//     int s=a-1;
//     int k=1;
//     int s1=1;
//     int  a1=a-1;
//     int k1=a1+(a1-1);
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=s;j++){
//             printf(" ");
//         }
//          for(int j=1;j<=k;j++){
//             printf("$");
//         }
//         s--;
//         k+=2;
//         printf("\n");
//     }
//      for(int i=1;i<=a-1;i++){
//         for(int j=1;j<=s1;j++){
//             printf(" ");
//         }
//          for(int j=1;j<=k1;j++){
//             printf("$");
//         }
//         s1++;
//         k1-=2;
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;

    for(int i=1;i<=(n*2)-1;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf(" *      ");
        }
        if(i<=n-1){
        s--;
        k+=2;
        printf("\n");
        }else{
            s++;
            k-=2;
            printf("\n");
        }
    }
    return 0;
}