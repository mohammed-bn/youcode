#include <stdio.h>

int main()
{
    float m; // le montant du prêt
    float t; // le taux d'intérêt
    float p; // le paiement mensuel
    float n; // la montant d'intérêt

    printf("veuillez saisir le montant du pret : ");
    scanf("%f", &m);
    printf("veuillez saisir taux d interet : ");
    scanf("%f", &t);
    printf("veuillez saisir le le paiement mensuel : ");
    scanf("%f", &p);

    t = (t / 100) / 12;// le presentage de taxe pour un moi
    // pour tout les mois de annee remplase 3 dans la boucle par 12
    for (int i = 0; i < 3; i++)
    {
        m = m + t * m - p;
        printf("paiment de mois %d _ %.2f\n", i + 1, m);
    }

    return 0;
}