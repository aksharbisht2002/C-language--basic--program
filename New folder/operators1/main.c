#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  num1 , num2 ,sum , sub , multi , modu ;
    float div;
    printf("ENTER THE TWO NUMBER :\n");
    scanf("%d", &num1 );
    scanf("%d"  , &num2);


     sum = num1 + num2;

     sub = num1 - num2;

     multi = num1 + num2 ;

     div = (float)num1 / num2;

     modu = num1% num2;

    printf("THE SUM -- %d\n", sum);

    printf("THE SUBTRACTION -- %d\n", sub);

    printf("THE MULTIPLICATION -- %d\n", multi);

    printf("THE QUOTIENT-- %f\n", div );

    printf("THE MODULUS6 -- %d\n", modu);
    return 0;
}
