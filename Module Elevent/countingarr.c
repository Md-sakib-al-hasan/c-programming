// #include <stdio.h>
// int main ()
// {
//     int a;
//     scanf("%d",&a);
//     int b[a];
//     for (int i = 0; i <a; i++)
//     {
//         scanf("%d",&b[i]);
//     }
//      int c[7]={0};
//     // int c[0]={0};
//     // int c[1]={0};
//     // int c[2]={0};
//     for (int i = 0; i <a; i++)
//     {   
//         int val=b[i];
//         c[val]++;
            
        
//     }
//      for (int i = 0; i <(sizeof(c) / sizeof(int)); i++)
//     {   
//           printf("%d -%d\n",i,c[i]);
        
//     }

//     return 0;
// }
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cont[7]={0};
    for(int i=0;i<n;i++){
        cont[a[i]]++;
    }
    for(int i=0;i<n;i++){
       printf("%d - %d",i,cont[i]);
    }
    
    return 0;
}