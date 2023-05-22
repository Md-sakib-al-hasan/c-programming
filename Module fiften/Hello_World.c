#include <stdio.h>
int main(){
int s[5]={97,80,83};
int sk1=80;
int g=0;
for(int j=0;j<5;j++){
     printf("%d %d sk\n",sk1,s[j]);
    if(s[j]==sk1){
        printf("%d %d\n",sk1,s[j]);
        g=1;
        break;
    }
}
printf("%d",g);
//for(int i=0;i<5;i++){
  //  printf("%d ",s[i]);
//}
return 0;
}
