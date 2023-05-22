#include <stdio.h>
int main ()
{
    
    int row ,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }  
    int falg=1;
    if(row != col){
        falg=0;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                if(a[i][j]!= 1){
                    falg=0;
                }continue;
            }
            if(a[i][j]!=0){
                falg =0;
            }
        }
    }
    if(falg==1){
        printf("digonal");
    }else{
        printf("not");
    }
    return 0;
}