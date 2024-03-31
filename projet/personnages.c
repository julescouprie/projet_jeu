#define dim 20
#define DIM 100


struct epeiste
{
    char role_epeiste[DIM];
    int attaque_epeiste;
    int pv_epeiste ;
    int sablier_epeiste ;

};
typedef struct epeiste S_epeiste;


struct hastaire
{
    char role_hastaire[DIM];
    int attaque_hastaire ;
    int pv_hastaire;
    int sablier_hastaire;

};
typedef struct hastaire S_hastaire;


struct archer
{
    char role_archer[DIM];
    int attaque_archer;
    int pv_archer;
    int sablier_archer;

};
typedef struct archer S_archer;


struct pretresse
{
    char role_pretresse[DIM];
    int attaque_pretresse ;
    int pv_pretresse ;
    int sablier_pretresse ;

};
typedef struct pretresse S_pretresse;


struct chevalier
{
    char role_chvalier[DIM];
    int attaque_chevalier;
    int pv_chevalier;
    int sablier_chevalier;

};
typedef struct chevalier S_chevalier;


struct griffon
{
    char role_griffon[DIM];
    int attaque_griffon;
    int pv_griffon;
    int sablier_griffon ;

};
typedef struct griffon S_griffon;


struct ange
{
    char role_ange[DIM];
    int attaque_ange;
    int pv_ange;
    int sablier_ange;

};
typedef struct ange S_ange;

struct armee_basique
{
    S_epeiste;
    S_hastaire;
    S_archer;
};
typedef struct armee_basique S_armee_basique;


struct armee_elite
{
    S_pretresse;
    S_chevalier;
};
typedef struct armee_elite S_armee_elite;


struct armee_legendaire
{
    S_griffon;
    S_ange;
};
typedef struct armee_legendaire S_armee_legendaire;


struct armee
{
    S_armee_basique;
    S_armee_elite;
    S_armee_legendaire;
};
typedef struct armee S_armee;

struct heros
{
    char nom_heros[dim];
    char pouvoir[dim];
    S_armee;

};
