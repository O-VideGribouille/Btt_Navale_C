#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

extern void Reset(){

    int n_i,n_j;

    for(n_i=1; n_i<TAILLE; n_i++){
        for(n_j=1; n_j<TAILLE; n_j++){

            plateau.chr_carte.tabjoueur1[n_i][n_j]=('_');
            plateau.chr_carte.tabjoueur2[n_i][n_j]=('_');
            plateau.chr_carte.tabjoueurattaque1[n_i][n_j]=('_');
            plateau.chr_carte.tabjoueurattaque2[n_i][n_j]=('_');
        }
    }

}
