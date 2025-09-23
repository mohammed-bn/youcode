#include <stdio.h>

int main()
{
    float m; // le montant en dollars
    float mt; // le montant avec taxe
    // printf("veuillez saisir le montantes en dollars : ");
    // scanf("%f",&m);
    do{
        printf("veuillez saisir le montantes en dollars : ");
        scanf("%f",&m);
    }while(m < 0);
    mt = m  *(1+  5.0/100.0) ;
    printf("%f",mt);

    return 0;
}