#include <stdio.h>
int main ()
{  int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a+b-c==d){
        printf("Yes");
    }else if (a+b*c==d)
    {
        printf("Yes");
    }else if (a*b+c==d)
    {
        printf("Yes");
    }else if (a*b-c==d)
    {
        printf("Yes");
    }else if (a-b*c==d)
    {
        printf("yes");
    }else if (a-b+c==d)
    {
        printf("yes");
    }else{
        printf("No");
    }
    
    
    
    
    

      
    return 0;
}