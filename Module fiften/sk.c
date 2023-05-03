// #include <stdio.h>
// int main ()
// {
//     char x='a';
//     char *p=&x;
//     printf("%p\n",p);
//     *p='b';
//     printf("%c\n",*p);
//     char *p1=&*p;

//     printf("%p\n",p1);
//     return 0;
// }
#include <stdio.h>
int main ()
{
    int x=100;
    int * ptr=&x;
    printf("%p\n",&x); 
    printf("%p\n",&ptr); 
    int *p1=&*ptr;
    printf("%p\n",p1); 
    return 0;
}