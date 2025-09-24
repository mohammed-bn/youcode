#include <stdio.h>

int main()
{
    int n1, n2;
    int div;

    printf("veuilez saisir le premier nomber : ");
    scanf("%d", &n1);
    printf("veuillez saisir le deuxieme nomber : ");
    scanf("%d", &n2);

    do
    {
        div = n1 % n2;
        n1 = n2;
        n2 = div;
    } while (n2 != 0);
    printf("Le plus grand commun diviseur est : %d", n1);
    return 0;
}