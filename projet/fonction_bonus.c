void phrase_debut()
{
    int i;
    i = rand() % 5;
    switch(i)
    {
        case 1: printf("\n\n nom d'une pipe en bois choisissez 1 ou 2 !!\n");
                break;

        case 2: printf("\n\n sacre bleu c'est soit 1 soit 2 !!\n");
                break;

        case 3: printf("\n\n on t'as dit soit 1 soit 2 vieux corsaire des eaux douces\n");
                break;

        case 4: printf("\n\nmon gueu vous etes bien sot, c'est 1 ou 2 !!\n");
                break;

        case 5: printf("\n\nvous n'etes pas le chevalier le plus chevalresque du royaume vous dit donc...\n");
                break;
    }
}


void ajouter_decor(int ligne, int colonne, int lg, int la) {
    // Dessiner une barrière entre les deux camps
    for (int i = 0; i < 8; i++) {
        positionner_curseur(ligne + 3, colonne + i * lg);
        dessiner_rectangle(ligne + 3, colonne + i * lg, 8, lg, la);
    }

    // Dessiner des décorations médiévales supplémentaires
    // Tours
    dessiner_rectangle(ligne + 1, colonne + 2, 12, 12 * lg, 8 * la);
    dessiner_rectangle(ligne + 1, colonne + 10, 12, 12 * lg, 8 * la);
    dessiner_rectangle(ligne + 5, colonne + 2, 12, 12 * lg, 8 * la);
    dessiner_rectangle(ligne + 5, colonne + 10, 12, 12 * lg, 8 * la);

    // Murs
    for (int i = 1; i < 7; i++) {
        dessiner_rectangle(ligne + i, colonne + 1, 8, lg, la);
        dessiner_rectangle(ligne + i, colonne + 11, 8, lg, la);
    }

    // Arbres (vert foncé)
    color(2, 0); // Vert foncé
    dessiner_rectangle(ligne + 2, colonne + 5, 2, lg, la);
    dessiner_rectangle(ligne + 6, colonne + 5, 2, lg, la);
    dessiner_rectangle(ligne + 2, colonne + 7, 2, lg, la);
    dessiner_rectangle(ligne + 6, colonne + 7, 2, lg, la);

    // Montagnes (gris foncé)
    color(8, 0); // Gris foncé
    dessiner_rectangle(ligne + 3, colonne + 4, 8, 2 * lg, la);
    dessiner_rectangle(ligne + 3, colonne + 8, 8, 2 * lg, la);

    // Rivières (bleu)
    color(9, 0); // Bleu
    dessiner_rectangle(ligne + 1, colonne + 4, 9, lg, la);
    dessiner_rectangle(ligne + 1, colonne + 7, 9, lg, la);
    dessiner_rectangle(ligne + 5, colonne + 4, 9, lg, la);
    dessiner_rectangle(ligne + 5, colonne + 7, 9, lg, la);

    // Rochers (marron)
    color(6, 0); // Marron
    dessiner_rectangle(ligne + 3, colonne + 1, 6, lg, la);
    dessiner_rectangle(ligne + 3, colonne + 11, 6, lg, la);
    dessiner_rectangle(ligne + 6, colonne + 1, 6, lg, la);
    dessiner_rectangle(ligne + 6, colonne + 11, 6, lg, la);

    // Revenir à la couleur par défaut (blanc sur fond noir)
    color(15, 0);
}


