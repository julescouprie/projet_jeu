#define NULL 0
#define LON 6
#define LAR 8

int main()
{

    int reponse_debut, reponse_debut2;
    int reponse_regles,a, b,c ;

    plein_ecran();

    affichage_nom_du_jeu();

    choix_debut();

    lecture_choix_debut(&reponse_debut);
    a = reponse_debut;


    //choix du menu du debut -> juste un menu avant que le jeu demarre
    if (a == 1)
        {
            affichage_regles();
            printf("\n\n validez la touche 9 si vous etes pret a jouer ! \n\n");
            while (c != 9)
                {
                    lecture_reponse_regles(&reponse_regles);
                    c= reponse_regles;
                }
                    printf(" \n j'espere t'as lu parce que la on joue !! \n");  // faut pas que ca lance le jeu avant qu'il appuie sur entr�e

                }
    else if  (a == 2)
        {
        printf("\n\n c'est partis jouons !!");
        }                                            // en vrai si on tape sur 2 ca fait rien

    else
    {           // faut pas qu'il s'�chappe si il appuie par sur 1 ou 2 on l'attrape
        while (b != 1 && b != 2 )
        {
            phrase_debut();
            choix_debut();
            lecture_choix_debut(&reponse_debut2);
            b= reponse_debut2;
        }


        if (b == 1)
            {
                affichage_regles();
                printf("\n\n appuyer sur la touche 9 si vous etes pret a jouer ! \n");

                while (c != 9)
                {
                    lecture_reponse_regles(&reponse_regles);
                    c = reponse_regles;
                }
                printf(" \n j'espere t'as lu parce que la on joue !! \n");
        }

        else if (b == 2){
            printf("\n\n c'est pas trop tot, allez jouons !!");
        }
    }



    // la faut creer les persos et tout

    //presentation_heros();
    //presentation_armee();

    effacer_console();


    srand(time(NULL));
    int tab_joueur_1[LON][LAR];
    int tab_joueur_2[LON][LAR];

    initialisation_plateau(tab_joueur_1);
    initialisation_plateau(tab_joueur_2);

    remplir_plateau(tab_joueur_1);
    remplir_plateau(tab_joueur_2);

    afficher_plateau(tab_joueur_1);
    afficher_plateau(tab_joueur_2);

    ajuster_plateau(tab_joueur_1);
    //ajuster_plateau(tab_joueur_2);

    mise_a_jour_plateau(tab_joueur_1);
    mise_a_jour_plateau(tab_joueur_2);

    printf("\n\n\n");

    afficher_plateau(tab_joueur_2);
    afficher_plateau(tab_joueur_1);



    printf("\n\n #teamnaps de malade #pupuce \n\n");

    return 0;
}
