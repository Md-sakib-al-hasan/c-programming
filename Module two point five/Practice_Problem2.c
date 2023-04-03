#include <stdio.h>
int main()
{   int number1,number2;
    scanf("%d %d",&number1,&number2);
    printf("Inputs are %d and %d \n Then you'll give output as:\n",number1,number2);
    printf("%d + %d = %d \n",number1,number2,number1+number2 );
    printf("%d - %d = %d \n",number1,number2,number1-number2 );
    printf("%d * %d = %d \n",number1,number2,number1*number2 );
    printf("%d / %d = %.2f \n",number1,number2,number1*1.0/number2 );

    return 0;
}