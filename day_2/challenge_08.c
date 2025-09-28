#include <stdio.h>

int main()
{
    int n, j;
    int carre;
    printf("veuillez saisir le nomber : ");
    scanf("%d", &n);

    for (j = 1; j * j <= n; j++)
    {
        carre = j * j;
        if (carre % 2 == 0)
            printf("%d\n", carre);
    }
    return 0;
}