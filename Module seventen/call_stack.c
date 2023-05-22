#include <stdio.h>
void world(){
    printf("hello word\n");
}
void hell(){
    printf("hello\n");
    world();
}
int main ()
{
    printf("Main start\n");
    hell();

    return 0;
}