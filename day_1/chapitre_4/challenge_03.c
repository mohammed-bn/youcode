#include <stdio.h>

int main()
{
    const float p= 3.14;
    int r ;
    float v = 0;
    printf("veuillez saisir le rayon en metres: ");
    scanf("%d",&r);
    v = (4.0f/3.0f) * p * r * r * r;
    printf("%.2f",v);
    return 0;
}