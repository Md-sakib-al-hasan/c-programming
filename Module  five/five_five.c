#include <stdio.h>
int main ()
{
    char X;
    scanf("%c",&X);
    if ('0'<=X && '9'>=X)
    {
        printf( "IS DIGIT");
    }else{
        printf("ALPHA\n");
        if('a'<=X && 'z'>=X){
            printf( "IS SMALL");
        }else{
           printf("IS CAPITAL");
        }
    }
    
    return 0;
}