#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a ,b , c ,d , e , f, g , h , i ;

     printf("enter the value for increment and decrement\n");
     scanf("%d", &a);

     int  value = 1;

     switch(value == 1)
      {
          case 1  : b = a++;
                    h = a;
                    printf("increment (prifix) %d\n", a);

          case 2 :  c = ++a;
                    printf("increment (postfix) %d\n", c);

          case 3 :  e = --a;
                    printf("decrement (postfix) %d\n", e);

          case 4 :   f = a--;
                     f = a ;
                     printf("decrement (prifix) %d\n", f);

          case 5 :    g = -a;
                      printf("minus %d\n", g);
      }

    return 0;
}
