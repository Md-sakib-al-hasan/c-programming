#include <stdio.h>
int main ()
{
    char a;
    scanf("%c",&a);
    if('a'<=a && a<='y'){
        int p=a+1;
        printf("%c",p);
    }else
    {   
        int p=a-25;
        printf("%c",p);
    }
    
    return 0;
}