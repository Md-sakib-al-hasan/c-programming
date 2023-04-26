
#include <stdio.h>
#include <string.h>
int main ()
{
    char palindrome[1001];
    char palindrome1[1001];
    scanf("%s",palindrome);

     int count=strlen(palindrome);
    for(int i=0;0<count;i++){
        palindrome1[i]=palindrome[count-1];
        count--;

    }
    int count1=strlen(palindrome);
    int handel=2;
    for(int i=0;i<count1;i++){
         if (palindrome[i]!=palindrome1[i])
         {
             handel=0;

         }else if(palindrome1[i]==palindrome[i]){
            handel=1;
         }

    }
    if(handel==1){
        printf("YES");
    }else if (handel==0)
    {
        printf("NO");
    }
    return 0;
}
