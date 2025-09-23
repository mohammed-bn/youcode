#include <stdio.h>

int main()
{
    const float p= 3.14;
    int r = 10;
    float v = 0;
    v = (4.0f/3.0f) * p * r * r * r;
    printf("%.2f\n",v);
    return 0;
}