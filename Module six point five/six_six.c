#include <stdio.h>
int main ()
{
    int a,b,c;
    int firstcount;
    int sum;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b && a<c){
          firstcount=a;
          b=b-a;
          c=c-a;
    }else if (b<a && b<c)
    {
        firstcount=b;
        a=a-b;
        c=c-b;
    }else{
         firstcount=c;
         a=a-c;
         b=b-c;
    }
    int al = a/2;
    if(al<c){
        sum=firstcount+al;
        printf("%d",sum);
    }else if(al>c){

       printf("%d",firstcount+c);
    }

    return 0;
}
