#include <stdio.h>

int main()
{
  char tab[3][20];
  for (int i = 0; i < 3; i++)
  {
    printf("entre un nom : ");
    scanf("%s",tab[i]);
  }
  for (int i = 0;i < 3; i++){
    printf("%d_%s\n",i,tab[i]);
  }
}