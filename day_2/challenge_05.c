#include <stdio.h>

int main()
{
    int note;
    
    printf("veuillez saisir la note : ");
    scanf("%d",&note);

    switch (note)
    {
        case 90 ... 100: printf("Note litterale : A"); break;
        case 80 ... 89 : printf("Note litterale : B"); break;
        case 70 ... 79 : printf("Note litterale : C"); break;
        case 60 ... 69 : printf("Note litterale : D"); break;
        case 0 ... 50  : printf("Note litterale : B"); break;
    }
    return 0;
}