#include <stdio.h>

int main()
{
    char a[30];
   
    int t = 0;// nomber tiri

    printf("veuillez saisir un nomber : ");
    scanf("%s",a);
    int i = 0;
    printf("Prefixe GS1 : ");
    while (a[i] != '\0')
    {
        if (a[i] == '-')
        {
            t++;
            if(t == 1 ) printf("\nIdentifiant de groupe : ");
            if(t == 2 ) printf("\nCode de l editeur : ");
            if(t == 3 ) printf("\nNumero d article : ");
            if(t == 4 ) printf("\nChiffre de controle : ");

        }
        else
        printf("%c",a[i]);
        i++;
    }
    return 0;
}