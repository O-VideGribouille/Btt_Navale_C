#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeur.h"

char chara(int n_j);

extern void Init(struct str_plateau *plateau){

    //init du plateau de jeu
    int n_i, n_j;
    char caractere;

    for(n_i=0; n_i<TAILLE; n_i++){
        for(n_j=0; n_j<TAILLE; n_j++){

           if(n_i==0){
                caractere=chara(n_j);
                //caractere=n_j+'@';
            }

            if((n_j==0)&&(n_i!=0)){
                caractere=n_i+'0';
            }

            else if((n_i!=0)&&(n_j!=0)){
                caractere='-';
            }

            if((n_i==10)&&(n_j==0)){
                caractere='X'; //Représente le 10
            }

            plateau->chr_initcarte.tabJ1[n_i][n_j]=caractere;
            plateau->chr_initcarte.tabJ2[n_i][n_j]=caractere;
            plateau->chr_attcarte.tabJatt1[n_i][n_j]=caractere;
            plateau->chr_attcarte.tabJatt2[n_i][n_j]=caractere;
        }
    }


    //init de la taille de chaque bateaux
    plateau->n_joueur.n_j1.chr_PorteAvion.n_taille=5;
    plateau->n_joueur.n_j2.chr_PorteAvion.n_taille=5;
    plateau->n_joueur.n_j1.chr_Croiseur.n_taille=4;
    plateau->n_joueur.n_j2.chr_Croiseur.n_taille=4;
    plateau->n_joueur.n_j1.chr_ContreTorpilleur.n_taille=3;
    plateau->n_joueur.n_j2.chr_ContreTorpilleur.n_taille=3;
    plateau->n_joueur.n_j1.chr_SousMarin.n_taille=3;
    plateau->n_joueur.n_j2.chr_SousMarin.n_taille=3;
    plateau->n_joueur.n_j1.chr_Torpilleur.n_taille=2;
    plateau->n_joueur.n_j2.chr_Torpilleur.n_taille=2;

    //init de la "vie" de chaque bateaux
    plateau->n_joueur.n_j1.chr_PorteAvion.n_vie=5;
    plateau->n_joueur.n_j2.chr_PorteAvion.n_vie=5;
    plateau->n_joueur.n_j1.chr_Croiseur.n_vie=4;
    plateau->n_joueur.n_j2.chr_Croiseur.n_vie=4;
    plateau->n_joueur.n_j1.chr_ContreTorpilleur.n_vie=3;
    plateau->n_joueur.n_j2.chr_ContreTorpilleur.n_vie=3;
    plateau->n_joueur.n_j1.chr_SousMarin.n_vie=3;
    plateau->n_joueur.n_j2.chr_SousMarin.n_vie=3;
    plateau->n_joueur.n_j1.chr_Torpilleur.n_vie=2;
    plateau->n_joueur.n_j2.chr_Torpilleur.n_vie=2;

    //init le nom de chaque bateaux
    plateau->n_joueur.n_j1.chr_PorteAvion.chr_nom=("porte avion");//strcpy()
    plateau->n_joueur.n_j2.chr_PorteAvion.chr_nom=("porte avion");
    plateau->n_joueur.n_j1.chr_Croiseur.chr_nom=("croiseur");
    plateau->n_joueur.n_j2.chr_Croiseur.chr_nom=("croiseur");
    plateau->n_joueur.n_j1.chr_ContreTorpilleur.chr_nom=("contre-torpilleur");
    plateau->n_joueur.n_j2.chr_ContreTorpilleur.chr_nom=("contre-torpilleur");
    plateau->n_joueur.n_j1.chr_SousMarin.chr_nom=("sous-marin");
    plateau->n_joueur.n_j2.chr_SousMarin.chr_nom=("sous-marin");
    plateau->n_joueur.n_j1.chr_Torpilleur.chr_nom=("torpilleur");
    plateau->n_joueur.n_j2.chr_Torpilleur.chr_nom=("torpilleur");

    //printf("%s\n",plateau.n_joueur.n_j1.chr_ContreTorpilleur.chr_nom);
    //printf("%d",plateau.n_joueur.n_j1.chr_ContreTorpilleur.n_taille);




}

char chara(int n_j){

    char k;

        switch(n_j){

        case 0 : k=' ';
            break;
        case 1 : k='A';
            break;
        case 2 : k='B';
            break;
        case 3 : k='C';
            break;
        case 4 : k='D';
            break;
        case 5 : k='E';
            break;
        case 6 : k='F';
            break;
        case 7 : k='G';
            break;
        case 8 : k='H';
            break;
        case 9 : k='I';
            break;
        case 10 : k='J';
            break;
        default: printf("Rencontre Probleme\n");
    }


        return k;
}

