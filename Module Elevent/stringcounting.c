#include <stdio.h>
#include <string.h>
int main ()
{
 char a[100]="programming";
 int c[26]={0};
 for(int i=0;i<strlen(a);i++){
    int val=a[i]-97;
    c[val]++;
 }
 for(int i=0;i<26;i++){
    if(c[i]!=0){
        printf("%c - %d\n",i+97,c[i]);
    }
 }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main ()
{
 char a[100]="programming";
 int c[26]={0};
 for(int i=0;i<strlen(a);i++){
    int val=a[i]-97;
    c[val]++;
 }
 for(int i=0;i<strlen(a);i++){
   int m=a[i]-97;
   if(c[m]!=0){
   printf("%c - %d\n",m+97,c[m]);
   c[m]=0;}
 }
    return 0;
}

