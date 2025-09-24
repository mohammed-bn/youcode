#include <stdio.h>

int main()
{
    int m1, j1, a1; // le moi et le jour et l'annee de la premier date.
    int m2, j2, a2; // le moi et jour et l'annee de le deuxéme date.

    printf("veuillez saisir la premier date : ");
    scanf("%d:%d:%d", &m1, &j1, &a1);
    printf("veuillez saisre la deuxme date : ");
    scanf("%d:%d:%d", &m2, &j2, &a2);

    if (a1 == a2)
    {
        if (m1 == m2)
        {
            if (j1 == j2)
            {
                printf("les date en meme.");
            }
            else
            {
                if (j1 < j2)
                {
                    printf("%d/%d/%d est plus ", m1, j1, a1);
                }
                else
                {
                    printf("%d/%d/%d est plus ", m2, j2, a2);
                }
            }
        }
        else
        {
            if (m1 < m2)
            {
                printf("%d/%d/%d est plus ", m1, j1, a1);
            }
            else
            {
                printf("%d/%d/%d est plus ", m2, j2, a2);
            }
        }
    }
    else
    {
        if (a1 < a2)
        {
            printf("%d/%d/%d est plus ", m1, j1, a1);
        }
        else
            printf("%d/%d/%d est plus ", m2, j2, a2);
    }
    return 0;
}