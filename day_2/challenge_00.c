#include <stdio.h>

int main()
{
    char chifre[100];
    int i = 0;
    int p, id, c, n, ch;
    int tmp = 0, tiri = 0;

    printf("veuillez saisir le chifre : ");
    scanf("%s", chifre);

    while (chifre[i] != '\0')
    {
        if (chifre[i] >= 48 && chifre[i] <= 57)
        {
            tmp = tmp * 10 + (chifre[i] - 48);
        }
        else if (chifre[i] == '-') // '-' en table ascii =  45;
        {
            if (tiri == 0)
                p = tmp;
            else if (tiri == 1)
                id = tmp;
            else if (tiri == 2)
                c = tmp;
            else if (tiri == 3)
                n = tmp;

            tiri++;
            tmp = 0;
        }
        i++;
    }
    ch = tmp;

    printf("Prefixe GS1 : %d\n", p);
    printf("Identifiant de groupe : %d\n", id);
    printf("Code de l editeur :%d\n", c);
    printf("Numero d article :%d\n", n);
    printf("Chiffre de controle :%d\n", ch);

    return 0;
}