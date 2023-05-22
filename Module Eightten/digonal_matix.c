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
    int count=0;
    if(row==col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j]!=0){
                continue;
            }else{
                count++;
            }
        }
    }
    if(count== (row*col)-row){
        printf("digonal mixtix");
    }
    else{
        printf("not digonal");
    }}else{
        printf("not digonal");
    }
    return 0;
}