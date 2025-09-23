#include <stdio.h>

int main()
{
    int x; //le nomber enter par l'utilisateur
    int r;// resultat

    printf("veuillez saisir la valeur de x : ");
    scanf("%d",&x);
    
    r = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
    printf("%d",r);
    return 0;
}