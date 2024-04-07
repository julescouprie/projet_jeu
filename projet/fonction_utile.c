#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <locale.h>

#define LAR 12
#define LON 4

void positionner_curseur(int ligne, int colonne);
void color (int couleurDuTexte, int couleurDuFond);
void plein_ecran();
void affichage_caractere_speciaux();
void dessiner_rectangle(int ligne,int colonne, int c, int lg, int la);


void plein_ecran()
{
    keybd_event(VK_MENU,0x38,0,0); //Appuie sur ALT
    keybd_event(VK_RETURN,0x1c,0,0); //Appuie ENTREE
    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0); // Relache ENTREE
    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0); //Relache ALT
}
void affichage_caractere_speciaux()
{
     printf("%c\n\n",218);
     printf("%c\n\n",196);
     printf("%c\n\n",191);
     printf("%c\n\n",179);
     printf("%c\n\n",195);
     printf("%c\n\n",180);
     printf("%c\n\n",192);
     printf("%c\n\n",217);

}

void color (int couleurDuTexte, int couleurDuFond)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, couleurDuFond*16+couleurDuTexte);
}
// 0.Noir
// 1.Bleu fonc�
// 2.Vert fonc�
// 3.Turquoise
// 4.Rouge fonc�
// 5.Violet
// 6.Vert caca d'oie
// 7.Gris clair
// 8.Gris fonc�
// 9.Bleu fluo
// 10.Vert fluo
// 11.Turquoise
// 12.Rouge fluo
// 13.Violet 2
// 14.Jaune
// 15.Blanc

void positionner_curseur(int ligne, int colonne)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);//permet de déclarer la variable "hstdout" qui fait référénce à la console
    COORD pos; // COORD est un type structuré défini dans la bibliothèque windows.h
    pos.X=colonne;// numéro de la colonne
    pos.Y=ligne;// numéro de la ligne
    SetConsoleCursorPosition(hStdout, pos);
}

void dessiner_rectangle(int ligne,int colonne,int c,int lg,int la)
{
    int i;
    int j;
    for (i = ligne ; i < ligne + lg; i++)
    {
        for (j = colonne ; j < colonne + la; j++)
        {
            positionner_curseur(i, j);
            color(c,c);
            printf(" ");
        }
    }

}

void effacer_console() {
    system("cls"); // Cette commande efface la console sous Windows
}

