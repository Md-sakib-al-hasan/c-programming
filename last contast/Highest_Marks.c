#include <stdio.h>
#include <limits.h>
int main ()
{ int a;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++){
        scanf("%d",&ar[i]);
    }
    int max=INT_MIN;
     for(int i=0;i<a;i++){
        if(ar[i]>max){
            max=ar[i];
        }
    }
    for(int i=0;i<a;i<i++){
        printf("%d ",max-ar[i]);
    }

    
    return 0;
}