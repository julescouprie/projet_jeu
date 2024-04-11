#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


#define LON  6
#define LAR  8

void initialisation_plateau (int tab[LON][LAR]);
void remplir_plateau (int tab[LON][LAR]);
void afficher_plateau(int tab[LON][LAR]);
void ajuster_plateau (int tab[LON][LAR]);


void initialisation_plateau (int tab[LON][LAR])
{
    for (int i = 0;i<LON;i++)
    {
        for (int j =0;j<LAR;j++)
        {
            tab[i][j] = 0;
        }
    }
}

void remplir_plateau (int tab[LON][LAR])
{


    int liste[48] = {11,11,11,11,11,12,12,12,12,13,13,13,13,21,21,21,21,22,22,22,22,23,23,23,23,31,31,31,31,32,32,32,32,33,33,33,33,41,42,43,51,52,53,61,62,63,71,72,73};
    int nb_choisi;

    for (int k = 0; k < 15; k++)
    {

        nb_choisi = liste[rand()%20];
        int rand_i, rand_j;
        if (nb_choisi == 61 ||nb_choisi == 62 ||nb_choisi == 63 ||nb_choisi == 71 ||nb_choisi == 72 ||nb_choisi == 73 )
        {
            do {
                rand_i = rand() % (LON-1);
                rand_j = rand() % (LAR-1);
            } while ((tab[rand_i][rand_j] != 0 || tab[rand_i +1][rand_j] != 0 || tab[rand_i][rand_j+1] != 0 || tab[rand_i+1][rand_j+1] != 0) );

            tab[rand_i][rand_j+1] = nb_choisi;
            tab[rand_i+1][rand_j+1] = nb_choisi;
            tab[rand_i+1][rand_j] = nb_choisi;
            tab[rand_i][rand_j] = nb_choisi;


        }
        if (nb_choisi == 41 ||nb_choisi == 42 ||nb_choisi == 43 ||nb_choisi == 51 ||nb_choisi == 52 ||nb_choisi == 53 )
        {
            do {
                rand_i = rand() % (LON-1);
                rand_j = rand() % (LAR);
            } while (tab[rand_i][rand_j] != 0 || tab[rand_i +1][rand_j] != 0 );

            tab[rand_i][rand_j] = nb_choisi;
            tab[rand_i+1][rand_j] = nb_choisi;



        }
        if (nb_choisi == 11 ||nb_choisi == 12 ||nb_choisi == 13 ||nb_choisi == 21 ||nb_choisi == 22 ||nb_choisi == 23||nb_choisi == 31 ||nb_choisi == 32 ||nb_choisi == 33 )
        {
            do {

                    rand_i = rand() % (LON);
                    rand_j = rand() % (LAR);


            } while (tab[rand_i][rand_j] != 0);
            tab[rand_i][rand_j] = nb_choisi;

        }
    }

}


void afficher_plateau(int tab[LON][LAR])
    {
        for (int i = 0;i < LON ;i++)
        {
            for (int j = 0; j< LAR ;j++)
            {
                printf ("| %d |",tab[i][j]);
            }
            printf ("\n");
        }
        printf("\n");
    }



void ajuster_plateau (int tab[LON][LAR])
    {
        for (int i = 0;i<LON;i++)
        {
            for (int j = 0;j<LAR;j++)
            {
                if (tab[i][j] == 0)
                {
                    int k = i+1;
                    do {

                        if (tab[k][j] == 11 ||tab[k][j] == 12 ||tab[k][j] == 13 ||tab[k][j] == 21 ||tab[k][j] == 22 ||tab[k][j] == 23 ||tab[k][j] == 31 ||tab[k][j] == 32 ||tab[k][j] == 33 )
                        {

                            tab[i][j] = tab[k][j];
                            tab[k][j] = 0;
                            break;
                        }
                        if (tab[k][j] == 41 ||tab[k][j] == 42 ||tab[k][j] == 43 ||tab[k][j] == 51 ||tab[k][j] == 52 ||tab[k][j] == 53)
                        {
                            if (k-i == 1)
                            {
                                tab[i][j] = tab[k][j];
                                tab[i+1][j] = tab[k+1][j];
                                tab[k+1][j] = 0;
                            }
                            if (k-i >1)
                            {
                                    tab[i][j] = tab[k][j];
                                    tab[i+1][j] = tab[k+1][j];
                                    tab[k][j] = 0;
                                    tab[k+1][j] = 0;
                            }

                            break;
                        }

                        if (tab[k][j] == 61 ||tab[k][j] == 62 ||tab[k][j] == 63 ||tab[k][j] == 71 ||tab[k][j] == 72 ||tab[k][j] == 73)
                        {
                            int indice = 0;
                            if (tab[k][j] == tab[k][j+1])
                            {
                                for (int w = k-1; w>=0 ;w--)
                                {
                                    if (tab[w][j+1] == 0)
                                    {
                                        indice ++;
                                    }
                                    if (tab[w][j+1] != 0)
                                    {
                                        break;
                                    }
                                }
                                if (indice == 1)
                                {
                                    tab[k-1][j] = tab[k][j];

                                    tab[k-1][j+1] = tab[k][j+1];


                                    tab[k][j] = tab[k+1][j];
                                    tab[k+1][j] = 0;
                                    tab[k][j+1] = tab[k+1][j+1];
                                    tab[k+1][j+1] = 0;
                                    break;
                                }
                                if (indice !=1 && indice != 0)
                                {
                                    tab[k-indice][j] = tab[k][j];
                                    tab[k-indice+1][j] = tab[k+1][j];
                                    tab[k-indice][j+1] = tab[k][j+1];
                                    tab[k-indice+1][j+1] = tab[k+1][j+1];

                                    tab[k][j] = 0;
                                    tab[k+1][j] = 0;
                                    tab[k][j+1] = 0;
                                    tab[k+1][j+1] = 0;
                                    break;
                                }
                            }
                            break;
                        }
                    k++;

                    }while(tab[i][j] == 0 && k<LON);



                }
            }

        }
    }

