#include <stdio.h>

int main()
{
    int heure,minit;
    int tm;// le temp en minit
    int t1,t2,t3,t4,t5,t6,t7,t8;// le temps en minit de chaque vols

    printf("veuillez saisir l heure :  ");
    scanf("%d:%d",&heure,&minit);
    tm = heure * 60 + minit;

    t1 = 8 * 60 + 00;
    t2 = 9 * 60 + 43;
    t3 = 11 * 60 + 19;
    t4 = 12 * 60 + 47;
    t5 = 14 * 60 + 00;
    t6 = 15 * 60 + 45;
    t7 = 19 * 60 + 00;
    t8 = 21 * 60 + 45;
    
    if (tm >= t1 && tm <= t2)
    {
        printf("l heur de depart la plus proche est 8:00 p.m ,arrivant a 10:16");
    }
    else if(tm >= t2 && tm <= t3)
    {
        printf("l heur de depart la plus proche est 9:00 p.m ,arrivant a 11:52");
    }
    else if (tm >= t3 && tm <= t4)
    {
        printf("l heur de depart la plus proche est 11:19 p.m ,arrivant a 1:31");
    }
    else if (tm >= t4 && tm <= t5)
    {
        printf("l heur de depart la plus proche est 12:47 p.m ,arrivant a 3:00");
    }
    else if (tm >= t5 && tm <= t6)
    {
        printf("l heur de depart la plus proche est 2:00 p.m ,arrivant a 4:08");
    }
    else if (tm >= t6 && tm <= t7)
    {
        printf("l heur de depart la plus proche est 3:45 p.m ,arrivant a 5:55");
    }
    else if (tm >= t7 && tm >= t8)
    {
        printf("l heur de depart la plus proche est 7:00 p.m ,arrivant a 9:20");
    }
    else
        printf("l heur de depart la plus proche est 9:45 p.m ,arrivant a 11:58");

    return 0;
}