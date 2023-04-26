#include <stdio.h>
int main ()
{
    int n,x;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&x);
    int appear=0;
    for(int i=0;i<n;i++){
        printf("%d\n",A[i]);
        if(A[i]==x){
            appear++;
        }
    }
    printf("%d",appear);
    return 0;
}
