#include <stdio.h>
int main ()
{
    int a[6]={1,2,3,4,5};
    for(int i=6-1;2+1<=i;i--){
        a[i+1]=a[i];
    }
    a[2]=100;
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    return 0;
}





// #include <stdio.h>
// int main ()
// { int a[6]={1,2,3,4,5};
// int m=100;
//     for(int i=6-1;0<=i;i--){
//         a[i+1]=a[i];
//         if(a[i]==a[1]){
//            a[i]=m;
//             break;
//         }
//     }
//     for(int i=0;i<6;i++){
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main ()
// {   int b=100;
//     for(int i=0;i<5;i++){
//        int a=b;
//         printf("%d",a);
//     }
//     return 0;
// }