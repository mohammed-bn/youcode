#include <stdio.h>
#include <math.h>

int main()
{
    int x; //le nomber enter par l'utilisateur
    int r;// resultat

    printf("veuillez saisir la valeur de x : ");
    scanf("%d",&x);
    
    r = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("%d",r);
    return 0;
}