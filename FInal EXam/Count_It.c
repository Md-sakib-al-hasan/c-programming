#include <stdio.h>
#include <string.h>
int main ()
{
    char st[1005];
    gets(st);
    int cap=0;
    int sm=0;
    int sp=0;
    for(int i=0;i<strlen(st);i++){
        if('a'<=st[i] || st[i]>='z'){
            sm+=1;
        }else if ('A'<=st[i] || st[i]>='Z')
        {
            cap+=1;
        }else if(st[i]==' '){
          sp+=1;
        }
        
    }
    printf("Capital - %d\n",cap);
    printf("Small - %d\n",sm);
    printf("Spaces - %d\n",sp);
    return 0;
}