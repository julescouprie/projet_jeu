#include <stdlib.h>
#include <stdio.h>

#define LAR 12
#define LON 4

// pieces dans un tableau
void mise_a_jour_plateau_joueur1(int tab_joueur1[7][8]);
void mise_a_jour_plateau_joueur2(int tab_joueur2[7][8]);



void mise_a_jour_plateau_joueur1(int tab_joueur1[7][8])
{
    int i,j;

    for (i=0; i<7; i++)
    {
        for (j=0; j<8; j++)
        {
            switch (tab_joueur1[i][j])  //on associe une unite a une valeur du tableau
            {
                case 11:
                dessiner_epeiste(i+1,j+1,4);
                break;
                case 12:
                dessiner_epeiste(i+1,j+1,9);
                break;
                case 13:
                dessiner_epeiste(i+1,j+1,14);
                break;

                case 21:
                dessiner_hastaire(i+1,j+1,4);
                break;
                case 22:
                dessiner_hastaire(i+1,j+1,9);
                break;
                case 23:
                dessiner_hastaire(i+1,j+1,14);
                break;

                case 31:
                dessiner_archer(i+1,j+1,4);
                break;
                case 32:
                dessiner_archer(i+1,j+1,9);
                break;
                case 33:
                dessiner_archer(i+1,j+1,14);
                break;

                case 41:
                dessiner_pretresse(i+1,j+1,4);
                break;
                case 42:
                dessiner_pretresse(i+1,j+1,9);
                break;
                case 43:
                dessiner_pretresse(i+1,j+1,14);
                break;

                case 51:
                dessiner_chevalier(i+1,j+1,4);
                break;
                case 52:
                dessiner_chevalier(i+1,j+1,9);
                break;
                case 53:
                dessiner_chevalier(i+1,j+1,14);
                break;

                case 61:
                dessiner_griffon(i+1,j+1,4);
                break;
                case 62:
                dessiner_griffon(i+1,j+1,9);
                break;
                case 63:
                dessiner_griffon(i+1,j+1,14);
                break;

                case 71:
                dessiner_ange(i+1,j+1,4);
                break;
                case 72:
                dessiner_ange(i+1,j+1,9);
                break;
                case 73:
                dessiner_ange(i+1,j+1,14);
                break;

                case 100:
                dessiner_mur(i+1, j+1,4);
                break;
                case 110:
                dessiner_mur(i+1, j+1, 9);
                break;
                case 120:
                dessiner_mur(i+1, j+1, 14);
                break;

                case 130:
                dessiner_attaque(i+1,j+1,0);
                break;
                case 140:
                dessiner_attaque(i+1,j+1,0);
                break;
                case 150:
                dessiner_attaque(i+1,j+1,0);
                break;
            }
        }
    }

}

void mise_a_jour_plateau_joueur2(int tab_joueur2[7][8])
{
    int i,j;

    for (i=0; i<7; i++)
    {
        for (j=0; j<8; j++)
        {
            switch (tab_joueur2[i][j])  //on associe une unite a une valeur du tableau
            {
                case 11:
                dessiner_epeiste(i+1,j+1,4);
                break;
                case 12:
                dessiner_epeiste(i+1,j+1,9);
                break;
                case 13:
                dessiner_epeiste(i+1,j+1,14);
                break;

                case 21:
                dessiner_hastaire(i+1,j+1,4);
                break;
                case 22:
                dessiner_hastaire(i+1,j+1,9);
                break;
                case 23:
                dessiner_hastaire(i+1,j+1,14);
                break;

                case 31:
                dessiner_archer(i+1,j+1,4);
                break;
                case 32:
                dessiner_archer(i+1,j+1,9);
                break;
                case 33:
                dessiner_archer(i+1,j+1,14);
                break;

                case 41:
                dessiner_pretresse(i+1,j+1,4);
                break;
                case 42:
                dessiner_pretresse(i+1,j+1,9);
                break;
                case 43:
                dessiner_pretresse(i+1,j+1,14);
                break;

                case 51:
                dessiner_chevalier(i+1,j+1,4);
                break;
                case 52:
                dessiner_chevalier(i+1,j+1,9);
                break;
                case 53:
                dessiner_chevalier(i+1,j+1,14);
                break;

                case 61:
                dessiner_griffon(i+1,j+1,4);
                break;
                case 62:
                dessiner_griffon(i+1,j+1,9);
                break;
                case 63:
                dessiner_griffon(i+1,j+1,14);
                break;

                case 71:
                dessiner_ange(i+1,j+1,4);
                break;
                case 72:
                dessiner_ange(i+1,j+1,9);
                break;
                case 73:
                dessiner_ange(i+1,j+1,14);
                break;

                case 100:
                dessiner_mur(i+1, j+1,0);
                break;
                case 110:
                dessiner_mur(i+1, j+1, 0);
                break;
                case 120:
                dessiner_mur(i+1, j+1, 0);
                break;

                case 130:
                dessiner_attaque(i+1,j+1,0);
                break;
                case 140:
                dessiner_attaque(i+1,j+1,0);
                break;
                case 150:
                dessiner_attaque(i+1,j+1,0);
                break;
            }
        }
    }
    if (tab_joueur1[i][j] == 100 &&tab_joueur1[i][j+1] == 100 && tab_joueur1[i][j+2] == 100)
    {
        if(tab)
    }
}


void armee_debut()
{

}



void murs_1(int tab_joueur1[7][8], int tab_joueur2[7][8])
{
    int i,j;

    //detection de 3 unites basique cote a cote horizontalement et meme couleur pour joueur 1
    for (i=0; i<7; i++)
    {
        for (j=0; j<8; j++)
        {
            if (tab_joueur1[i][j] == 11)
            {
                if (tab_joueur1[i][j] == tab_joueur1[i][j+1] && tab_joueur1[i][j] == tab_joueur1[i][j+2])
                {
                tab_joueur1[i][j] = 100;
                tab_joueur1[i][j+1] = 100;
                tab_joueur1[i][j+2] = 100;
                }
            }
            else if (tab_joueur1[i][j] == 12)
            {
                if (tab_joueur1[i][j] == tab_joueur1[i][j+1] && tab_joueur1[i][j] == tab_joueur1[i][j+2])
                {
                tab_joueur1[i][j] = 110;
                tab_joueur1[i][j+1] = 110;
                tab_joueur1[i][j+2] = 110;
                }
            }
            else if (tab_joueur1[i][j] == 13)
            {
                if (tab_joueur1[i][j] == tab_joueur1[i][j+1] && tab_joueur1[i][j] == tab_joueur1[i][j+2])
                {
                tab_joueur1[i][j] = 120;
                tab_joueur1[i][j+1] = 120;
                tab_joueur1[i][j+2] = 120;
                }
            }
        }
    }


    //detection de 3 unites basique cote a cote horizontalement et meme couleur pour joueur 2
    for (i=0; i<7; i++)
    {
        for (j=0; j<8; j++)
        {
            if (tab_joueur2[i][j] == 11)
            {
                if (tab_joueur2[i][j] == tab_joueur2[i+1][j] && tab_joueur2[i][j] == tab_joueur2[i+2][j])
                {
                tab_joueur2[i][j] = 100;
                tab_joueur2[i+1][j] = 100;
                tab_joueur2[i+2][j] = 100;
                }
            }
            else if (tab_joueur2[i][j] == 12)
            {
                if (tab_joueur2[i][j] == tab_joueur2[i][j+1] && tab_joueur2[i][j] == tab_joueur2[i][j+2])
                {
                tab_joueur1[i][j] = 110;
                tab_joueur1[i][j+1] = 110;
                tab_joueur1[i][j+2] = 110;
                }
            }
            else if (tab_joueur1[i][j] == 13)
            {
                if (tab_joueur1[i][j] == tab_joueur1[i][j+1] && tab_joueur1[i][j] == tab_joueur1[i][j+2])
                {
                tab_joueur2[i][j] = 120;
                tab_joueur2[i][j+1] = 120;
                tab_joueur2[i][j+2] = 120;
                }
            }
        }
    }


    void attaque_basique(int tab_joueur1[7][8], int tab_joueur2[7][8])
    {
        //detection de 3 unites basique cote a cote horizontalement et meme couleur pour joueur 1
        for (i=0; i<7; i++)
        {
            for (j=0; j<8; j++)
            {
                if (tab_joueur1[i][j] == 11)
                {
                    if (tab_joueur1[i][j] == tab_joueur1[i+1][j] && tab_joueur1[i][j] == tab_joueur1[i+2][j])
                    {
                    tab_joueur1[i][j] = 130;
                    tab_joueur1[i+1][j] = 130;
                    tab_joueur1[i+2][j] = 130;
                    }
                }
                else if (tab_joueur1[i][j] == 12)
                {
                    if (tab_joueur1[i][j] == tab_joueur1[i][j+1] && tab_joueur1[i][j] == tab_joueur1[i][j+2])
                    {
                    tab_joueur1[i][j] = 140;
                    tab_joueur1[i+1][j] = 140;
                    tab_joueur1[i+2][j] = 140;
                    }
                }
                else if (tab_joueur1[i][j] == 13)
                {
                    if (tab_joueur1[i][j] == tab_joueur1[i][j+1] && tab_joueur1[i][j] == tab_joueur1[i][j+2])
                    {
                    tab_joueur1[i][j] = 150;
                    tab_joueur1[i+1][j] = 150;
                    tab_joueur1[i+2][j] = 150;
                    }
                }
            }
        }


        //detection de 3 unites basique cote a cote horizontalement et meme couleur pour joueur 2
        for (i=0; i<7; i++)
        {
            for (j=0; j<8; j++)
            {
                if (tab_joueur2[i][j] == 11)
                {
                    if (tab_joueur2[i][j] == tab_joueur2[i][j+1] && tab_joueur2[i][j] == tab_joueur2[i][j+2])
                    {
                    tab_joueur2[i][j] = 130;
                    tab_joueur2[i+1][j] = 130;
                    tab_joueur2[i+2][j] = 130;
                    }
                }
                else if (tab_joueur2[i][j] == 12)
                {
                    if (tab_joueur2[i][j] == tab_joueur2[i][j+1] && tab_joueur2[i][j] == tab_joueur2[i][j+2])
                    {
                    tab_joueur1[i][j] = 140;
                    tab_joueur1[i+1][j] = 140;
                    tab_joueur1[i+2][j] = 140;
                    }
                }
                else if (tab_joueur1[i][j] == 13)
                {
                    if (tab_joueur1[i][j] == tab_joueur1[i][j+1] && tab_joueur1[i][j] == tab_joueur1[i][j+2])
                    {
                    tab_joueur2[i][j] = 150;
                    tab_joueur2[i+1][j] = 150;
                    tab_joueur2[i+2][j] = 150;
                    }
                }
            }
        }
    }


    void
}

