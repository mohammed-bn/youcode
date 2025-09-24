#include <stdio.h>

int main()
{
    int nbr;
    int m2,m1,inv;

    printf("veuillez sasir un nomber de deux chifres : ");
    scanf("%d",&nbr);
    m1 = nbr % 10;
    m2 = nbr / 10;
    inv = m1 * 10 + m2;
    printf("%d",inv);

    
    
    return 0;
}