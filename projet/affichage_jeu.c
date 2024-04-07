#include <stdio.h>
#include <stdlib.h>

#define LON 4
#define LAR 12

// debut du jeu
void affichage_nom_du_jeu();
void choix_debut();
void lecture_choix_debut(int *choix);
void lecture_reponse_regles(int *reponse_regles);
void affichage_regles();

//heros et armee
void presentation_heros();
void presentation_armee();
void nom_joueur1();
void nom_joueur2();
void lecture_nom_joueur1(int *nom_joueur1);
void lecture_nom_joueur2(int *nom_joueur2);

//affichage plateau et pieces
void dessiner_plateau_vide(int ligne, int colonne);


// debut du jeu
void affichage_nom_du_jeu(int lignes, int colonne, int color, int lg, int la)
{
    printf("might and magic #teamnaps");
}


void choix_debut()
{
    printf("\n\n\n");
    printf("regles -> 1");
    printf("\njouer -> 2 \n\n");
    printf("Que voulez vous faire : ");
}


void lecture_choix_debut(int *choix)
{
    scanf("%d", choix);

}

void affichage_regles()
{
    printf("\n\n et voici les regles encule");
}

void lecture_reponse_regles(int *reponse_regles)
{
    scanf("%d", reponse_regles);
}


//h�ros et arm�e

void presentation_heros()
{
    printf("\n\neh voici ton heros: t'es un champion maintenant");
}

void presentation_armee()
{
    printf("\n\n t'as une bete d'armee en sah ");
}

void nom_joueur1()
{
    printf("\nil vous faut choisir un nom tout de meme ! ");
    printf("\n -> ");
}

void lecture_nom_joueur1(int *nom_joueur1)
{
    scanf("%s", nom_joueur1);
}

void nom_joueur2()
{
    printf("\nil qui sera l'adversaire tant redoute ?! ");
    printf("\n -> ");
}

void lecture_nom_joueur_2(int *nom_joueur2)
{
    scanf("%s", nom_joueur2);
}


void dessiner_plateau_vide(int ligne, int colonne)
{

    //tableau jjoueur 1
    int i;
    int j;
    dessiner_rectangle(ligne-1,colonne-2,4,8*LON+2,8*LAR+4);    //dessiner le fond de l'echiquier

    int nbLignes = 7;
    int nbColonnes = 8;

    int tab_joueur1[7][8] =
    {
        {15 ,15, 15 ,15 ,15 ,15 ,15 , 15},  // ligne de fond pour compter les pv du heros
        {7 ,14,7 ,14,7 ,14, 7,14},
        {14,7 ,14,7 ,14,7 ,14, 7},
        {7 ,14,7 ,14,7 ,14, 7,14},
        {14,7 ,14,7 ,14,7 ,14, 7},
        {7 ,14,7 ,14,7 ,14, 7,14},
        {14,7 ,14,7 ,14,7 ,14, 7},
    };                                                          //crée un quadrillage de couleur gris clair et jaune
//====================================Reproduction du tableau==========================================================================
    for (i = 0; i < nbLignes; i++)
    {
        for (j = 0; j < nbColonnes; j++)
        {
            dessiner_rectangle(ligne + LON*i ,colonne + LAR*j,tab_joueur1[i][j],LON,LAR);   //dessine une case en fonction du tableau et des positions entrées
        }
    }

    //tableau joueur 2

    dessiner_rectangle(ligne-1,colonne-2,4,8*LON+2,8*LAR+4);    //dessiner le fond du plateau

    int tab_joueur2[7][8] =
    {
        {7 ,14,7 ,14,7 ,14, 7,14},
        {14,7 ,14,7 ,14,7 ,14, 7},
        {7 ,14,7 ,14,7 ,14, 7,14},
        {14,7 ,14,7 ,14,7 ,14, 7},
        {7 ,14,7 ,14,7 ,14, 7,14},
        {14,7 ,14,7 ,14,7 ,14, 7},
        {15 ,15 ,15 ,15 ,15 ,15 ,15 , 15},  // ligne de fond pour compter les pv du heros

    };                                                          //crée un quadrillage de couleur gris clair et jaune
//====================================Reproduction du tableau==========================================================================
    for (i = 0; i < nbLignes; i++)
    {
        for (j = 0; j < nbColonnes; j++)
        {
            dessiner_rectangle((ligne+7) + LON*i ,colonne + LAR*j,tab_joueur2[i][j],LON,LAR);   //dessine une case en fonction du tableau et des positions entrées
        }
    }
}
