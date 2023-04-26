#include <stdio.h>
#include <string.h>
int main ()
{
    char S[1001];
    scanf("%s",&S);
    int capital=0;
    int small=0;
    for(int i=0;i<strlen(S);i++){
        if('a'<=S[i]&&'z'>=S[i]){
            small++;
        }else{
            capital++;
        }
    }
    printf("%d %d",capital,small);
    
    return 0;
}