#define LON 8
#define LAR 12

// debut du jeu
void affichage_nom_du_jeu();
void choix_debut();
void lecture_choix_debut(int *choix);
void lecture_reponse_regles(int *reponse_regles);
void affichage_regles();

//h�ros et arm�e
void presentation_heros();
void presentation_armee();
void nom_joueur1();
void nom_joueur2();
void lecture_nom_joueur1(int *nom_joueur1);
void lecture_nom_joueur2(int *nom_joueur2);

//affichage plateau et pieces
void plateau_vide();


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

//plateau/pieces

void initialiser_plateau(int *plateau[13][8])
{
    for (int i=0; i < 13 ; i++)
    {
        for (int j=0; j < 8 ; j++)
        {
            *plateau[i][j]=0;
        }
    }
}

void dessiner_plateau(int ligne, int colonne, int color, int lg, int la, int plateau[13][8])
{
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (plateau[i][j] == 0)
            {
                plateau[i][j] = dessiner_rectangle(i, j, 15, LON, LAR);
            }
            printf("%d", plateau[i][j]); // Afficher la valeur de la case
        }
        printf("\n");
    }
}
