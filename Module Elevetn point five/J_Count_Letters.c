#include <stdio.h>
#include <string.h>
int main ()
{   char c;
     int cont[26]={0};
    while(scanf("%c",&c)!=EOF){
        int val=c-'a';
        cont[val]++;

    }
    for(int i=0;i<26;i++){
        if(cont[i]!=0){
          printf("%c : %d\n",i+'a',cont[i]);
        }
    }
    return 0;
}
