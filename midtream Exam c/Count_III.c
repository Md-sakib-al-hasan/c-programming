#include <stdio.h>
#include <string.h>
int main ()
{
    char S[1001];
    scanf("%s",S);
    int cont[26]={0};
    for(int i=0;i<strlen(S);i++){
        int val=S[i]-'a';
        cont[val]++;
        
    }
    for(int i='a';i<='z';i++){
        printf("%c - %d\n",i,cont[i-'a']);
    }
    return 0;
}