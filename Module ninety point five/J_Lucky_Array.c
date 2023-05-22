 #include <stdio.h>
 #include <limits.h>
 int main ()
 {
     int a;
     scanf("%d",&a);
     int ar[a];
     for(int i=0;i<a;i++){
        scanf("%d",&ar[i]);
     }
     int min=INT_MAX;
     for(int i=0;i<a;i++){
        if(min>ar[i]){
            min=ar[i];
        }
     }
     int count=0;
     for(int i=0;i<a;i++){
        if(min==ar[i]){
            count++;
        }
     }
     if(count%2==0){
        printf("Unlucky");
     }else{
        printf("Lucky");
     }
     return 0;
 }