#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeur.h"

//#define TAILLE 11



void InsertBat(char tabJ[TAILLE][TAILLE], struct str_cara cara){

    int ok=0; //booleen ok=false
    int n_x, n_y, n_i, n_j;
    char chr_x;
    char p;
    //chr_x recupere la coordonne en caractere pour qu'elle devienne un entier sous n_x

    //etape 1
    do{
       // ok=1; //ok=true;
        p=OrientBat();

        do{
            printf("Entrez les coordonee de la pointe du %s : \n",cara.chr_nom);
            printf("x (lettre) : ");
            scanf("%c", &chr_x);
            chr_x=toupper(chr_x);//met les lettre minuscules en majuscules
            if((chr_x<='@')||(chr_x>='K')){
                    printf("Emplacement impossible, veuillez entrer des coordonees existantes\n");
                    ok=0;
            }else{
                ok=1;
            }
            fflush(stdin);
        }while(ok==0);
        ok=0;
        //changement caractere en entier
        n_x=entier(chr_x);
       // printf("%d", n_x);
       do{
            printf("y (nombre, X equivaut a 10) : ");
            scanf("%d", &n_y);
            if((n_y<=0)||(n_y>=TAILLE)){printf("Emplacement impossible, veuillez entrer des coordonees existantes\n"); ok=0;}
            else{
                ok=1;
            }
            fflush(stdin);
       }while(ok==0);
        ok=0;
        //Etape 2

        //verif' limite horizontale
        //ok=1;
        if((p=='H')&&(n_x<=(TAILLE-cara.n_taille))){
                ok=1;

                //verif' si emplacement libre & voisin proche
                for(n_i=0; n_i<cara.n_taille; n_i++){

                        if((tabJ[n_y][n_x+n_i]=='S')||(tabJ[n_y][n_x+n_i]=='*')){

                            ok=0; // placement=false;

                            printf("Emplacement impossible, il y a soit deja un bateau present ou celui-ci sera beaucoup trop proche");

                        }
                 }
        }//else{ok=0;printf("Salut");}

            //verif' limite verticale
            if((p=='V')&&(n_y<=(TAILLE-cara.n_taille))){
                ok=1;
                //verif' si emplacement libre & voisin proche
                for(n_j=0; n_j<cara.n_taille; n_j++){

                        if((tabJ[n_y+n_j][n_x]=='S')||(tabJ[n_y+n_j][n_x]=='*')){
                            ok=0; // placement=false;

                            printf("Emplacement impossible, veuillez entrer des coordonee existantes");
                        }
                }

            }

            //ok=1;
    }while(ok==0);//tant que ok equivaut a false

    //Etape 3
    //pose bateau -> visuel

    if((p=='V')){

        for(n_i=0; n_i<cara.n_taille; n_i++){

                tabJ[n_y+n_i][n_x]='S';


        }

        if((n_y>1)){

                tabJ[n_y-1][n_x]='*';

        }

        if((n_y+cara.n_taille<TAILLE)){

                tabJ[n_y+cara.n_taille][n_x]='*';

        }

        for(n_i=0; n_i<cara.n_taille; n_i++){

                if(n_x>1){

                    tabJ[n_y+n_i][n_x-1]='*';
                }

                if(n_x<10){

                tabJ[n_y+n_i][n_x+1]='*';

                }


        }

    }

    if((p=='H')){

        for(n_j=0; n_j<cara.n_taille; n_j++){

                tabJ[n_y][n_x+n_j]='S';


        }

        if((n_x>1)){

                tabJ[n_y][n_x-1]='*';

        }

        if((n_x+cara.n_taille<TAILLE)){

                tabJ[n_y][n_x+cara.n_taille]='*';

        }

        for(n_j=0; n_j<cara.n_taille; n_j++){

                if(n_y>1){

                    tabJ[n_y-1][n_x+n_j]='*';
                }

                if(n_y<10){

                tabJ[n_y+1][n_x+n_j]='*';

                }


        }

    }
    Affichage(tabJ);//pour afficher dans le tableau
}
//changement caractere en entier
int entier(char chr_x){

    int k;
    //chr_x=toupper(chr_x);//met les lettre minuscules en majuscules

        switch(chr_x){

        //case 0 : k=' ';
            //break;
        case 'A' : k=1;
            break;
        case 'B' : k=2;
            break;
        case 'C' : k=3;
            break;
        case 'D' : k=4;
            break;
        case 'E' : k=5;
            break;
        case 'F' : k=6;
            break;
        case 'G' : k=7;
            break;
        case 'H' : k=8;
            break;
        case 'I' : k=9;
            break;
        case 'J' : k=10;
            break;
        default: printf("Rencontre Probleme\n");
    }
        return k;
}

