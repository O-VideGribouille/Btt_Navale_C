#ifndef VALEUR_H_INCLUDED
#define VALEUR_H_INCLUDED

//CONSTENTES
#define TAILLE 11 //Taille pour un plateau de 10x10
/*
#define NBBAT 5 // nombre de type de bateau
#define TMAXBAT 5 // taille maximum d'un bateau
#define BAT 'S' //signe du bateau sur le plateau
#define RATE 'o' //signe du point coordonnee du tir rate
#define TOUCHE 'T'//signe du point coordonnee du tir touche
#define COULE 'C'//signe du point coordonnee du bateau coule
*/

//VARIABLES


//INITIALISATION DES STRUCTURES

//structure  pour les coordonné de chaque joueurs
typedef struct str_coord{
// poisition des tires / placement bt
    int n_x1;
    int n_x2;
    int n_y1;
    int n_y2;

}str_coord;

    str_coord coord;

//caracteristiques
typedef struct str_cara{

    int n_taille; //longueur du bateau
    int n_vie; //nombre de touche avant d'etre coule
    str_coord n_pos; // coordonner du bateau
    char *chr_nom; // nom du bateau

}str_cara;

    //str_cara cara;

//Les differents bateaux
typedef struct str_bt{

    str_cara chr_PorteAvion;
    str_cara chr_Croiseur;
    str_cara chr_ContreTorpilleur;
    str_cara chr_SousMarin;
    str_cara chr_Torpilleur;
// -> prendron les valeurs de cara
}str_bt;

     str_bt bt;

// chaque joueurs a ses bateaux
typedef struct str_joueurs{

    str_bt n_j1;
    str_bt n_j2;
// -> prendrons les valeurs de bt;

}str_joueurs;

   //str_joueurs joueurs;


//Map utiliser pour l'initialisation / placement des bateaux
typedef struct str_initmap{
    //ne pas initialiser dans une structure

    char tabJ1[TAILLE][TAILLE];
    char tabJ2[TAILLE][TAILLE];

}str_initmap;

    str_initmap initmap;

//Map utiliser pour la phase d'attaque
typedef struct str_attmap{
    //ne pas initialiser dans une structure

    char tabJatt1[TAILLE][TAILLE];
    char tabJatt2[TAILLE][TAILLE];
// -> prendrons la valeur initmap de leur adersaire
}str_attmap;

    //str_attmap attmap;

typedef struct str_plateau{

    str_initmap chr_initcarte; //prendra la valeur de str_initmap
    str_attmap chr_attcarte; //prendra la valeur de str_attmap
    str_joueurs n_joueur; // prendra la valeur de str_joueur

}str_plateau;

    str_plateau plateau;


//PROTOTYPES
void Init(struct str_plateau *plateau);
void Affichage(char tabJ[TAILLE][TAILLE]);
void PoseBat(char tabJ[TAILLE][TAILLE], struct str_bt joueur);
void InsertBat(char tabJ[TAILLE][TAILLE], struct str_cara cara);
void Attaque(char tabJ[TAILLE][TAILLE], char tabatt[TAILLE][TAILLE], struct str_cara *cara);

int entier(char chr_x);

#endif // VALEUR_H_INCLUDED
