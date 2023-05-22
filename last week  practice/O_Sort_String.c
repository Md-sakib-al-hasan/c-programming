#include <stdio.h>
int main ()
{
  int a;
  scanf("%d",&a);
  int s[a];
  for(int i=0;i<=a;i++){
    char sk;
    scanf("%c",&sk);
    int sk1=(int)(sk);
    if('a'<=sk && 'z'>=sk){
        int g=0;
      for(int j=1;j<i;j++){
        if(sk1==s[j]){
            g=1;
            break;
        }
      }
    if(g==0){
        s[i]=sk1;
    }
    }

  }

  for(int i=1;i<a;i++){
     for(int j=i+1;j<a+1;j++){
        if(s[i]>s[j]){
            char tmp=s[i];
            s[i]=s[j];
            s[j]=tmp;
        }
    }
   }
  for(int i=1;i<a+1;i++){
    printf("%c",s[i]);
  }
    return 0;
}
