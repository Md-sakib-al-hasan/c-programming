#include <stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i = 0; i <N; i++)
    {
        scanf("%d",&arr[i]);
    }
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            evensum+=arr[i];
        }else{
            oddsum+=arr[i];
        }
    }
    printf("%d %d",evensum,oddsum);
    return 0;
}