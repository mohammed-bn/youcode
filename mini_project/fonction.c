#include <stdio.h>
#include "v_global.h"

int menu()
{
    int chois;
    printf("--------------------menu------------------\n");
    printf("veuillez saisir un nomber pour confirmer votre chois : \n");
    printf("1_ Pour Ajouter un avion (ou plusieurs). \n");
    printf("2_ pour Modifier un avion (modele, capacite, statut).\n");
    printf("3_ pour Supprimer un avion.\n");
    printf("4_ Pour Afficher la liste des avions.\n");
    printf("4_ Pour Rechercher un avion (par id ou par modele).\n");
    printf("5_ Pour Trier les avions (par capacite, par modele alphabetique,).\n");
    printf("6_ Pour Quiter le programe.\n");
    printf("veuillez saisir votre chois : ");
    scanf("%d", chois);
    return chois;
}

void ajoute()
{
    int n_ajoute; // le nomber d'avion que enter par l'utilisateur
    int n_status;
    int jour, moi, annee; // pour stock la date entre
    id_avion[0] = 1;
    printf("Entrez le nombre d avions que vous souhaitez ajouter : ");
    scanf("%d", n_ajoute);
    for (int i = 0; i < n_ajoute; i++)
    {
        id_avion[i] = id_avion[i - 1] + 1;
        printf("veuillez saisir le modele d avion : ");
        fgets(modele[i], 30, stdin);

        printf("veuillez saisir la capacite d avion : ");
        scanf("%d", &capacite[i]);
        printf("veuillez saisir la status d avion : ");
        printf("1_ Disponible \n 2_ En maintenance \n3_ En vol");
        scanf("%d", &n_status);
        do
        {
            printf("le nomber incorrect veuillez saisir un nomber entre 1 et 3!\n");
            scanf("%d", &n_status);
        } while (n_status <= 0 || n_status >= 4) ;
        switch (n_status)
        {
        case 1:
            status[i][20] = "Disponible";
            break;

        case 2:
            status[i][20] = "En maintenance";
            break;
        case 3:
            status[i][20] = "En vol";
            break;
        }
        printf("veuillez saisir la date d entree : ");

    }
}

void modifier()
{
    int ad_modifier;
    int md_status;
    printf("veuillez saisir le id de l avion que vous souhaitez modifier. ");
    scanf("%d",ad_modifier);
    for (int i = 0; i < 100; i++)
    {
        if (id_avion[i] == ad_modifier)
        {
            printf("veuillez modifier modele d avion : ");
            fgets(modele[i], 30, stdin);
            printf("veuillez modifier la capacite d avion : ");
            scanf("%d", &capacite[i]);
            printf("veuillez modifier la status d avion : ");
            printf("1_ Disponible \n 2_ En maintenance \n3_ En vol");
            scanf("%d", &md_status);
            do
            {
                printf("le nomber incorrect veuillez saisir un nomber entre 1 et 3!\n");
                scanf("%d", &md_status);
            } while (md_status <= 0 || md_status >= 4);
            switch (md_status)
            {
            case 1:
                md_status[i][30] = "Disponible";
                break;

            case 2:
                md_status[i] = "En maintenance";
                break;
            case 3:
                md_status[i] = "En vol";
            }
        }

            
        else
            printf("id de l'avion que vous demandez n'existe pas.");
    }
}