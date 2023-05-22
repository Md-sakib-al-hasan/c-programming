#include <stdio.h>
#include <limits.h>
void max_and_min(){
    int a,c;
    scanf("%d",&a);
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<a;i++){
          scanf("%d",&c);
          if(c<min){
            min=c;
          }
           if (c>max)
          {
            max=c;
          }  
    }
    printf(" %d %d",min,max);
}
int main ()
{    
    max_and_min();
    return 0;
}