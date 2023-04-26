#include <stdio.h>
# include <string.h>
int main ()
{

   char a[100],b[100];
   scanf("%s %s",a,b);
//    int i=0;
//    while (1)
//    {    if(a[i]==b[i]){
//        i++;
//    }
//         if(a[i]=='\0'&& b[i]=='\0'){
//         printf("Same\n");
//         break;
//        }else if (a[i]=='\0')
//        {
//         printf("a is the small object");
//         break;
//        }else if (b[i]=='\0')
//        {
//          printf("b is the small object");
//          break;
//        }
//        else if (a[i]==b[i])
//        {
//           i++;

//        }else    if (a[i]<b[i])
//         {
//         printf(" a ist small object");
//         break;
//         }else if (a[i]>b[i])
//         {
//         printf("b is the small object");
//             break;
//         }




//    }
int val=strcmp(a,b);
if(val==0){
    printf("same");
}else if (val>0)
{
 printf("b is the small object");
}else{
    printf("a is the small object");
}


    return 0;
}
