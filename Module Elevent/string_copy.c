 #include <stdio.h>
 # include<string.h>
 int main ()
 {
    char a[10]="apple";
    char b[10]="orang";
    // int count=strlen(b);
    // for(int i=0;i<=count;i++){
    //     a[i]=b[i];
    // }
    strcpy(a,b);
    printf("%s",a);
    
     return 0;
 }