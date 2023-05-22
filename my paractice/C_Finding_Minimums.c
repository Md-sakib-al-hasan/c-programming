#include <stdio.h>
#include <limits.h>
#include <math.h>
int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ar[a];
    for(int i=0;i<a;i++){
        scanf("%d",&ar[i]);
    }
    float c=a;
    int d=ceil(c/b);
    int s=0;
    for(int i=0;i<d;i++){
        int min=INT_MAX;
        for(int j=0;j<d;j++){
            if(ar[s]<min){
                min=ar[s];
            }
            s++;
        }
        printf("%d ",min);
    }

    return 0;
}