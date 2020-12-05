#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeur.h"


extern void Affichage(char tabJ[TAILLE][TAILLE]){

  int n_i, n_j;

    for(n_i=0; n_i<TAILLE; n_i++){
        for(n_j=0; n_j<TAILLE; n_j++){

            printf("%c",tabJ[n_i][n_j]);
        }
        printf("\n");
    }


}
