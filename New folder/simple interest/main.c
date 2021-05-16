#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int P,R,T,SI;
    printf("ENTER THE VALUE OF PRINCIPAL\n");
    scanf("%d",&P);
    printf("ENTER THE VALUE OF RATE\n");
    scanf("%d",&R);
    printf("ENTER THE VALUE OF TIME\n");
    scanf("%d",&T);
     SI = (P*R*T)/100 ;

    printf("THE RESULT OF THE SI OPERATION IS ---%d" , SI );
    return 0;
}








































