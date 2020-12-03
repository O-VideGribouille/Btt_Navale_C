#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

extern void Condition_Final(char tab_Char){

   char tab=tab_Char;
    int mort;//booleen

    int n_nb=0;
    int n_i, n_j;

    for(n_i=1; n_i<TAILLE; n_i++){

        for(n_j=1; n_j<TAILLE; n_j++){

            if(tab[n_i][n_j]==("T ")){ //touche

                n_nb=n_nb+1;
            }
        }
    }

    if(n_nb==17){

        mort==1; //mort=true;
    }



}
