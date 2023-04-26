#include <stdio.h>
#include <string.h>
int main(){
int alphabet=101,n;
scanf("%d\n",&n);
char longstri[n][alphabet];
for(int i=0;i<n;i++){
    //fgets(longstri[i],alphabet,stdin);
    gets(longstri[i]);

}
int count=0;

for(int i=0;i<n;i++){
   if(i==i){
    count=0;
   }
    for(int j=0;j<101;j++){
    if(longstri[i][j]=='\0'){
        break;
    }else{
      count++;
    }
}



if(10<count){
   int ount=count-2;
    printf("%c%d%c\n",longstri[i][0],ount,longstri[i][count-1]);
}
else{
    printf("%s\n",longstri[i]);
}
}




//count End //

return 0;
}
