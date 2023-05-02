#include <stdio.h>
char capital(){
    char a;
    scanf("%c",&a);
    char b= a+32;
    return b;
}
int main ()
{
    char c=capital();
    printf("%c",c);
    return 0;
}