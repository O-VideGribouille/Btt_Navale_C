#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeur.h"


char OrientBat(){
    char p;
    int ok=0; //ok=false;


    do{
    printf("\nJoueur, selection de la position horizontale (h) ou verticale (v) de votre bateau .\n");
    scanf("%c",&p);
     p=toupper(p);//met les lettre minuscules en majuscules
    fflush(stdin);

    if((p=='H')||(p=='V')){
            ok=1; //ok=true;
            //printf("ok = true");
    }

    }while(ok==0);

    return p;

}
