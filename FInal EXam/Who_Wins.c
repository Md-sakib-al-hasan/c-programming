#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int ta=0;
    int pa=0;
    while (n--)
    {
      long long int t,p;
        scanf("%lld %lld",&t,&p);
        if(t>p){
            ta+=1;
        }  
        if(p>t){
            pa+=1;
        }  

    }
    if(ta>pa){
        printf("Tiger");
    }else if (pa>ta)
    {
        printf("Pathan");
    }else{
        printf("Draw");
    }
    
    
    return 0;
}