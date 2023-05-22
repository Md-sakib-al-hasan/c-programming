#include <stdio.h>
#include <string.h>
int mylen(char *a){
  int i=0;
  while(a[i]!='\0'){
    i++;
  }
  return i;
}
int main ()
{  char a[100];
    scanf("%s",a);
       int s = mylen(a);
       printf("%d",s);

    return 0;
}
