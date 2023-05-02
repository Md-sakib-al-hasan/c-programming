#include <stdio.h>
int main ()
{
    char arr;
    int cont[26]={0};
    while (scanf("%c",arr)!=EOF)
    {
        int val=arr-'a';
        cont[val]++;

    }
    for(int i=0;i<26;i++){
       if(cont[i]!=0){
         printf("%c : %d\n",i+'a',cont[i]);
       }
    }
    
    return 0;
}