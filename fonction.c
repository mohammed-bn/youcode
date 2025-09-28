#include <stdio.h>
#include "v_global.h"
char* strcapy(char distination[], char source[])
{
    int i = 0;
    for (i; source[i] != '\0'; i++)
    {
        distination[i] = source[i]; 
    }
    distination[i] = '\0';
    return distination;
}
int strcmp(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return 0;
        }
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
        return 1;
    else
        return 0;
}
void ajoute()
{
    
    int n_status;
    id_avion[0] = 1;

    printf("Entrez le nombre d avions que vous souhaitez ajouter : ");
    scanf("%d", &n_ajoute);

    for (int i = 0; i < n_ajoute; i++)
    {
        if (i == 0)
        {
            id_avion[i] = 1;
        }
        else
            id_avion[i] = id_avion[i - 1] + 1;
        printf("%d_veuillez saisir le modele d avion : ",i);
        while (getchar() != '\n');
        fgets(modele[i], 30, stdin);

        printf("%d_veuillez saisir la capacite d avion : ",i);
        scanf("%d", &capacite[i]);

        printf("Slectionnez status de l avion.\n");
        printf("1_ Disponible.\n2_ En maintenance.\n3_ En vol.\n");
        printf("%d_veuillez saisir la status d avion : ",i);
        scanf("%d", &n_status);
        while (n_status < 1 || n_status > 3)
        {
            printf("le nomber incorrect veuillez saisir un nomber entre 1 et 3!\n");
            scanf("%d", &n_status);
        }
        switch (n_status)
        {
        case 1:
            strcapy(status[i], "Disponible");
            break;

        case 2:
            strcapy(status[i], "En maintenance");
            break;
        case 3:
            strcapy(status[i], "En vol");
            break;
        }
        printf("%d_veuillez saisir la date d entree jj/mm/aaaa : ",i);
        while (getchar() != '\n');
        fgets(dateEentree[i], 10, stdin);
        int j = 0;
        int tmp = 0;
        int sep = 0; // elment de separation
        while (dateEentree[i][j] != '\0')
        {
            if (dateEentree[i][j] >= 48 && dateEentree[i][j] <= 57)
            {
                tmp = tmp * 10 + (dateEentree[i][j] - 48);
            }
            else
            {
                switch (sep)
                {
                case 0:
                    jour = tmp;
                    break;
                case 1:
                    moi = tmp;
                    break;
                case 2:
                    annee = tmp;
                    break;
                }
                sep++;
                tmp = 0;
            }
            j++;
        }
        // printf("%d_%d_%d",jour,moi,annee);
        if ((jour < 1 || jour > 31) || (moi < 1 || moi > 12) || annee < 2000)
        {
            printf("Attention la date incorecte !\n");
        }

        printf("___________________________________________\n");
    }
}

void modifier()
{
    int ad_modifier;
    int md_status; // la nouvelle modification de status
    int i = 0;
    int trouve = 0;

    printf("veuillez saisir le id de l avion que vous souhaitez modifier: ");
    scanf("%d", &ad_modifier);

    while (i != 1000)
    {
        if (id_avion[i] == ad_modifier)
        {
            trouve = 1;
            printf("veuillez modifier modele d avion : ");
            while (getchar() != '\n');
            fgets(modele[i], 30, stdin);
            printf("veuillez modifier la capacite d avion : ");
            scanf("%d", &capacite[i]);
            printf("1_ Disponible\n2_ En maintenance\n3_ En vol\n");
            printf("veuillez modifier la status d avion : ");
            scanf("%d", &md_status);
            while (md_status < 1 || md_status > 3)
            {
                printf("le nomber incorrect veuillez saisir un nomber entre 1 et 3!\n");
                scanf("%d", &md_status);
            }
            switch (md_status)
            {
            case 1:
                strcapy (status[i], "Disponible");
                break;
            case 2:
                strcapy (status[i], "En maintenance");
                break;
            case 3:
                strcapy (status[i], "En vol");
            }
        }
        i++;
    }
    if (trouve != 1) printf("id de l avion que vous demandez n existe pas.\n");
}
void Suppression()
{
    int av_supr;//le id de l avion que souhaite l'itulisateur supprime
    int trouve = 0;

    printf("veuillez saisir le id de l avion que vous souhaitez supprimer: ");
    scanf("%d", &av_supr);

    for (int i = 0; i < 1000; i++)
    {
        if (av_supr == id_avion[i])
        {
            trouve = 1;
            for (int j = i; j < 999; j++)
            {
                id_avion[j] = id_avion[j+1];
                strcapy (modele[j], modele[j+1]);
                capacite[j] = capacite[j+1];
                strcapy (status[j], status[j+1]);
                strcapy(dateEentree[j], dateEentree[j+1]);

            }
            id_avion[999] = 0;
            modele[999][0] = '\0';
            capacite[999] = 0;
            status[999][0] = '\0';
            dateEentree[999][0] = '\0';
            break;
        }
    }
    if (trouve != 1) printf("id de l avion que vous demandez n existe pas.\n");
    else printf("avion supprime aven un succee\n");
}

void affichage()

{
    for (int i = 0; i < n_ajoute; i++)
    {
        printf("*********************************\n");
        printf("id de avion  : %d\n", id_avion[i]);
        printf("modele de avion Nomber : %s", modele[i]);
        printf("la capacite de avion : %d\n", capacite[i]);
        printf("la statu de avion : %s\n", status[i]);
        printf("la date d entree Nomber: %s\n",dateEentree[i]);
        
    }
}

void recherche()
{
    int chois_de_r; // le chois de mode de recherche
    int id_re;//le id que litulisater recherche
    char modele_re[30];// le modele avion que litulisater recherche
    int trouve = 0;
    printf("selectione le mode de recherche souhaite. \n");
    printf("1_recherche par id.\n");
    printf("2_recherche par modele.\n");
    printf("3_retour a le menu principal.\n");
    printf("veuillez saisir votre chois : ");
    scanf("%d", &chois_de_r);
    
    switch (chois_de_r)
    {
        case 1:
            printf("veuillez saisir le id avion que vous recherchez : ");
            scanf("%d", &id_re);
            for (int i = 0; i < 1000; i++)
            {
                if (id_avion[i] == id_re)
                {   
                    trouve = 1;
                    printf("*********************************\n");
                    printf("id de avion  : %d\n", id_avion[i]);
                    printf("modele de avion Nomber : %s", modele[i]);
                    printf("la capacite de avion : %d\n", capacite[i]);
                    printf("la statu de avion : %s\n", status[i]);
                    printf("la date d entree Nomber: %s\n",dateEentree[i]);
                    break;
                } 
            }
            if (trouve != 1)
            {
                printf("id que vous recherche n exixte pas!");
            }
            break;
        
        case 2:
            printf("veuillez saisir le modele avion que vous recherche : ");
            scanf("%s", modele_re);
            for (int i = 0; i < 1000; i++)
            {
                if (strcmp(modele[i], modele_re) == 1)
                {
                    trouve = 1;
                    printf("*********************************\n");
                    printf("id de avion  : %d\n", id_avion[i]);
                    printf("modele de avion Nomber : %s", modele[i]);
                    printf("la capacite de avion : %d\n", capacite[i]);
                    printf("la statu de avion : %s\n", status[i]);
                    printf("la date d entree Nomber: %s\n",dateEentree[i]);
                    break;
                }
            }
            if (trouve != 1)
            { 
                printf("modele n existe pas!\n");
            }
            break;    
        }
}
void menu()
{
    int chois;
    printf("--------------------menu------------------\n");
    printf("veuillez saisir un nomber pour confirmer votre chois : \n");
    printf("1_ Pour Ajouter un avion (ou plusieurs). \n");
    printf("2_ pour Modifier un avion (modele, capacite, statut).\n");
    printf("3_ pour Supprimer un avion.\n");
    printf("4_ Pour Afficher la liste des avions.\n");
    printf("5_ Pour Rechercher un avion (par id ou par modele).\n");
    printf("6_ Pour Trier les avions (par capacite, par modele alphabetique,).\n");
    printf("7_ Pour Quiter le programe.\n");
    printf("veuillez saisir votre chois : ");
    scanf("%d", &chois);
    switch (chois)
    {
    case 1:
        ajoute();
        menu();
        break;
    case 2:
        modifier();
        menu();
        break;
    case 3:
        Suppression();
        menu();
        break;
    case 4:
        affichage();
        menu();
        break;
    case 5:
        recherche();
        menu();
        break;
    case 6:
        printf("le trie ne pas disponible pour le moument");
        break;
    case 7:
        break;
    }
}
