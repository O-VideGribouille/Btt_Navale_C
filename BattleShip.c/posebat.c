#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeur.h"


void PoseBat(char tabJ[TAILLE][TAILLE], struct str_bt joueur){

    int joueurAct;
    int ok; //booleen
    InsertBat(tabJ, joueur.chr_PorteAvion);
    InsertBat(tabJ, joueur.chr_Croiseur);
    InsertBat(tabJ, joueur.chr_ContreTorpilleur);
    InsertBat(tabJ, joueur.chr_SousMarin);
    InsertBat(tabJ, joueur.chr_Torpilleur);

printf("entrer");

 }




