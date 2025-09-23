#include <stdio.h>

int main()
{
    int m;// montant 
    int r1,r2,r3,r4,r5,r6,r7;

    printf("veuillez sasir le montant en dollars :");
    scanf("%d",&m);
    r1 = m / 20;
    r2 = m % 20;
    printf("Billets de 20$ : %d\n",r1);
    r3 = r2 / 10;
    r4 = r2 % 10;
    printf("Billets de 10$ : %d\n",r3);
    r5 = r4 / 5;
    r6 = r4 % 5;
    printf("Billets de 5$ : %d\n",r5);
    r7 = r6 / 1;
    printf("Billets de 1$ : %d\n",r7 );


    return 0;
}