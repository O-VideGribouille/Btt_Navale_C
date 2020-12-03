#ifndef VALEURS_H_INCLUDED
#define VALEURS_H_INCLUDED

//CONSTENTES
#define TAILLE 11
#define NBNAV 5
#define TMAXNAV 5

//VARIABLES
   // char tab_Char[TAILLE][TAILLE];
    char don;

//INITIALISATION DES STRUCTURES
//structure  pour les coordonné de chaque joueurs
typedef struct str_coord{
// poisition des tires / placement bt
    int n_x1;
    int n_x2;
    int n_y1;
    int n_y2;

}str_coord;

//str_coord coord;

//caracteristique
typedef struct str_cara{

    int n_l;
    int n_lim;
    str_coord n_pos;
    char *chr_nom;

}str_cara;

typedef struct str_bt{

    str_cara chr_PorteAvion;
    str_cara chr_Croiseur;
    str_cara chr_ContreTorpilleur;
    str_cara chr_SousMarin;
    str_cara chr_Torpilleur;
// -> prendron les valeurs de cara
}str_bt;

typedef struct str_joueur{

    str_bt n_j1;
    str_bt n_j2;
// -> prendrons les valeurs de bt;

}str_joueur;


typedef struct str_iniymap{
    //ne pas initialiser dans une structure

    char tabjoueur1[TAILLE][TAILLE];
    char tabjoueur2[TAILLE][TAILLE];
// -> prendrons la valeur de tab_Char; ou non, a voir avec l'evolution du code
}str_initmap;


typedef struct str_attmap{
    //ne pas initialiser dans une structure
    initmap tabjoueurattaque1[TAILLE][TAILLE];
    initmap tabjoueurattaque2[TAILLE][TAILLE];
// -> prendrons la valeur de tab_Char; ou non, a voir avec l'evolution du code
}str_attmap;

typedef struct str_plateau{

    str_map chr_carte; //prendra la valeur de map
    str_joueur n_joueur; // prendra la valeur de str_joueur

}str_plateau;
    str_plateau plateau;

#endif // VALEURS_H_INCLUDED
