# include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++){
        scanf("%d",&ar[i]);
    }
    int counft=0;
    int Even=0;
    int odd=0;
    for(int i=0;i<a;i++){
        if(ar[i]%3==0 && ar[i]%5==0){
            counft++;
        }
        if(ar[i]%2==0){
            Even++;
        }if(ar[i]%2==1){
            odd++;
        }
    }

    printf(" five and three = %d\n",counft);
    printf("Even = %d\n",Even);
    printf("Odd = %d",odd);


    return 0;
}