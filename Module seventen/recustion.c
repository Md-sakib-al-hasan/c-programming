// #include <stdio.h>
// void fun(int i){
//     if(i<6){
//         printf("%d ",i);
//         fun(i+1);
//     }
// }
// int main ()
// {  int i=1;
//     fun(i);
    
//     return 0;
// }
#include <stdio.h>
void fun(int i){
        printf("%d ",i);
        if(i==1){
            return 0;
        }

        fun(i-1);
    
}
int main ()
{  int i=100;
    fun(i);
    
    return 0;
}