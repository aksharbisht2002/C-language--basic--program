#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b  ;
    printf("enter the  value \n");
    scanf("%d", &a );
    scanf("%d", &b);

    if(a==b)
    {
        printf("value a are equal \n");
    }

       else{
        printf("not equal \n");

    }
    if(a>b)
    {
         printf(" a is greater than b  \n");
    }
       else{
          printf("b  is greater than b \n");

    }
    if(a<= b)
    {
        printf("equal or greater \n ");
    }
    else{
         printf("not equal or grater \n ");
    }
 return 0;
}
