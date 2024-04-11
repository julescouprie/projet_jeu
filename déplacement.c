#include <stdlib.h>
#include <stdio.h>

#define LAR 8
#define LON 6

// pieces dans un tableau
void mise_a_jour_plateau(int tab[LON][LAR]);
void attaque_basique(int tab[LON][LAR]);
void murs_1(int tab[LON][LAR]);


void mise_a_jour_plateau(int tab[LON][LAR])
{
    //int i,j;

    murs_1(tab);
    attaque(tab);

    /*for (i=0; i<LON; i++)
    {
        for (j=0; j<LAR; j++)
        {
            switch (tab[i][j])  //on associe une unite a une valeur du tableau
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
    }*/
}


void armee_debut()
{

}

void murs_1(int tab[LON][LAR])
{
    for (int i = 0; i < LON; i++)
    {
        for (int j = 0; j < LAR; j++)
        {
            if (tab[i][j] == 11 || tab[i][j] == 12 || tab[i][j] == 13 || tab[i][j] == 21 || tab[i][j] == 22 || tab[i][j] == 23 || tab[i][j] == 31 || tab[i][j] == 32 || tab[i][j] == 33)
            {
                int indice = 0; // Initialiser indice à 1 car on compte déjà la première occurrence
                for (int w = j + 1; w < LAR; w++)
                {
                    if (tab[i][w] == tab[i][j])
                    {
                        indice++;
                    }
                    else
                    {
                        break; // Sortir de la boucle dès qu'une valeur différente est trouvée
                    }
                }
                if (indice >= 2)
                {
                    for (int z = 0; z <= indice; z++)
                    {
                        tab[i][j + z] = 100;
                    }
                }
            }
        }
    }
}

void attaque (int tab[LON][LAR])
{
    for (int i = 0; i<LON; i++)
    {
        for(int j=0; j<LAR; j++)
        {
            if (tab[i][j]==11 || tab[i][j]==12 || tab[i][j]==13 || tab[i][j]==21 || tab[i][j]==22 || tab[i][j]==23 || tab[i][j]==31 || tab[i][j]==32 || tab[i][j] == 33)
            {
                    int indice = 0;
                    for (int w=i+1; w<LON; w++)
                    {
                        if (tab[w][j]== tab[i][j])
                        {
                            indice ++;
                        }
                        if (tab[w][j]!= tab[i][j])
                        {
                            break;
                        }
                    }
                if(indice >= 2)
                {
                    for(int z=0; z <= 2; z++)

                    {
                        tab[i+z][j]=200;
                    }
                }
            }
        }
    }
}
