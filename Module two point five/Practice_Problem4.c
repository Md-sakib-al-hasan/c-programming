# include <stdio.h>
int main ()
{   int numb;
    scanf("%d",&numb);
    if(numb > 0){
        printf("positive");
    }else if (numb< 0){
        printf("negative");
    }else{
        printf("zero");
    }
    return 0;
}