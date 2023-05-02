#include <stdio.h>
void capital(){
    char a;
    scanf("%c",&a);
    int b = a-32;
    printf("%c",b);
}
int main ()
{
    capital();
    return 0;
}