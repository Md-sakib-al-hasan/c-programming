#include <stdio.h>
int fun(char a[],int i){
  if(a[i]=='\0') return 0;
  int i=fun(a,i+1);
  return i+1;
}
int main ()
{
    char a[10]={10,20,30,40};
    fun(a,0);
    return 0;
}