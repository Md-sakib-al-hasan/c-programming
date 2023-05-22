#include <stdio.h>
#include <string.h>
int main ()
{
    char d[10],a,b,c;
    scanf("%s %c %c %c",d,&a,&b,&c);
    for(int i=0;i<strlen(d);i++){
            if(d[i]!=a && d[i]!=b && d[i]!=c){
                printf("%c",d[i]);
            }
    }
    return 0;
}