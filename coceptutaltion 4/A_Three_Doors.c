#include <stdio.h>
void solve(){

    int n;
    scanf("%d",&n);
     int arr[4];
    for(int i=1;i<=3;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    if(arr[n]==0){
        flag=0;
    }else{
        int s1=arr[n];
        if(arr[s1]==0){
        flag=0;
    }else{
           int s2=arr[s1];
        if(arr[s2]==0){
        flag=1;
    }

    }
}
if (flag==1)
{
    printf("YES\n");
}else{
    printf("NO\n");
}

}
int main ()
{
    int tes;
    scanf("%d",&tes);
    while (tes--)
    {
        solve();
    }
    
    return 0;
}