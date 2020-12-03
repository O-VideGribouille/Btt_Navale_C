#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

extern void Attaque(char tab_Char[TAILLE][TAILLE], char don, int n_joueur){
   char tabattaque=tab_Char;
   char tabjoueur=tab_Char;

    int n_x, n_y;
    int ok=0; //booleen, ok=false;

    Affichage(tabattaque,don);
    printf("Entrer les coordonees de tire joueur %d", n_joueur ," \n");
    do{
    printf("X : ");
    scanf("%d", n_x);
    printf(" Y : ");
    scanf("%d", n_y);

    if(((n_x>0)&&(n_x<TAILLE))&&((n_y>0)&&(n_y<TAILLE))){

        if(tabattaque[n_x][n_y]==("_ ")){

            ok==1;
            if(tabjoueur[n_x][n_y]==("B ")){

                tabattaque[n_x][n_y]=("T ") //touche
                Affichage(tabattaque,don);
                printf("Touchee");
            }else{

                tabattaque[n_x][n_y]=("O ") //rater
                Affichage(tabattaque,don);
                printf("A l eau");
            }
        }

    }

    }while(ok==0);

}
