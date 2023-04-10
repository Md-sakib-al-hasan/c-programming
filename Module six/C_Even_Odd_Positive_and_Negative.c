#include <stdio.h>
int main ()
{
   int n,a;
   int eve=0,odd=0,pos=0,ne=0;
   scanf("%d",&n);
   for(int i =1;i<=n;i++){
    scanf("%d",&a);
    if(a%2==0){
        eve++;
    }else{
        odd++;
    }

    if(0<a){
        pos++;
    }
    else if (a<0){
        ne++;
    }
   }

  printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",eve,odd,pos,ne);
   return 0;
}
