#include <stdio.h>
int main ()
{
    char Conversion[100001];
    scanf("%s",Conversion);
    for(int i=0;i<100001;i++){
        if (Conversion[i]=='\0')
        {
            break;
        }

        else if (','==Conversion[i])
        {
            Conversion[i]=' ';
             printf("%c",Conversion[i]);
        }else if ('a'<=Conversion[i] && 'z'>=Conversion[i])
        {
             printf("%c",Conversion[i]-32);

        }else if ('A'<=Conversion[i]&&'Z'>=Conversion[i])
        {
            printf("%c",Conversion[i]+32);
        }

    }
    return 0;
}
