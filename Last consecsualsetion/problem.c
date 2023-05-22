#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int A=0;
    int B=0;
    for(int i=0;i<a;i++){
        char a,b;
        scanf("%c %c",&a,&b);
        if(a>b){
            A++;
        }
        if(b>A){
            B++;
        }
    }
    if(A>B){
        printf("Alish\n");
    }else if (B>A)
    {
        printf("Bidihsa\n");
    }else{
        printf("Drow");
    }
    
    return 0;
}