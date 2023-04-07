#include <stdio.h>
int main ()
{  long long int n,k;
    scanf("%lld",&n);
    if(1000<n){
        printf("I will buy Punjabi\n");
        
        if(n-1000 > 500){
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
         }
    }else{
        printf("Bad luck!\n");
    }
  
    
    return 0;
}