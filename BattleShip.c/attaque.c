#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeur.h"


void Attaque(char tabJ[TAILLE][TAILLE],char tabatt[TAILLE][TAILLE], struct str_cara *cara){

    int ok=0; //booleen ok=false
    int n_x, n_y;
    char chr_x;

    Affichage(tabatt);

    do{
        do{
            printf("Entrez les coordonee de votre tire : \n");
            printf("x (lettre) : ");
            scanf("%c", &chr_x);
            chr_x=toupper(chr_x);//met les lettre minuscules en majuscules
            if((chr_x<='@')||(chr_x>='K')){
                    printf("Tir impossible, veuillez entrer des coordonees existantes\n");
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
            if((n_y<=0)||(n_y>=TAILLE)){printf("Tir impossible, veuillez entrer des coordonees existantes\n"); ok=0;}
            else{
                ok=1;
            }
            fflush(stdin);
       }while(ok==0);
        //ok=0;
        //Etape 2

            //ok=1;
    }while(ok==0);



    if(tabJ[n_y][n_x]=='S'){

        tabatt[n_y][n_x]='T';

        cara->n_vie=cara->n_vie-1;

        printf("Le navire ennemi est touche\n");
       // printf("VIE : %d ", cara->n_vie);
        system("pause");

    }else{

        tabatt[n_y][n_x]='o';
        printf("vous l'avez manque\n");
       system("pause");
    }

    system("cls");

    Affichage(tabatt);//pour afficher dans la map d'attaque
    system("pause");


}

