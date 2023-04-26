#include <stdio.h>
#include <string.h>
int main ()
{   int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char arr[102];
        scanf("%s",arr);
        int val=strlen(arr);
        if(val>10){
            printf("%c%d%c\n",arr[0],val-2,arr[val-1]);
        }else{
            printf("%s\n",arr);
        }
    }
    
    
    return 0;
}