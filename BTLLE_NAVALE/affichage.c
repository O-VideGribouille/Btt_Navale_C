#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
/*
extern void Affichage(char tab_Char[TAILLE][TAILLE], char don){
    int n_i,n_j;

    char *p_tab_Char=tab_Char;
    char *p_don=don;

    for(n_i=0; n_i<TAILLE; n_i++){

        *p_tab_Char[n_i][0]=p_don[n_i+1]+(' ');
        *p_tab_Char[0][n_i]=p_don[n_i+1]+(' ');
    }*/
 /*   tab_Char[TAILLE][0]=('X'); //10 romain
    tab_Char[0][TAILLE]=('X'); //10 romain

    for(n_j=0; n_j<TAILLE; n_j++){

        if(tab_Char[n_j][n_i]==('_')||(tab_Char[n_j][n_i]=('O'))){
                textcolor(BLUE);
                //Color(WHITE, BLUE);
                cprintf("%s\n",tab_Char[n_j][n_i]);
                textcolor(WHITE);
    }else{
        if((tab_Char[n_j][n_i]=('*')||(tab_Char[n_j][n_i]=('B'))||(tab_Char[n_j][n_i]=('T'))){

                textcolor(WHITE);
                cprintf("%s",tab_Char[n_j][n_i]);
           }

    }

}*/

/*
extern void Affichage(char tab_Char[TAILLE][TAILLE], char don){
    int n_i,n_j;



    for(n_i=0; n_i<TAILLE; n_i++){

        tab_Char[n_i][0]=don[n_i+1]+(' ');
        tab_Char[0][n_i]=don[n_i+1]+(' ');
    }
    tab_Char[TAILLE][0]=('X'); //10 romain
    tab_Char[0][TAILLE]=('X'); //10 romain

    for(n_j=0; n_j<TAILLE; n_j++){

        if(tab_Char[n_j][n_i]==('_')||(tab_Char[n_j][n_i]=('O'))){
                textcolor(BLUE);
                //Color(WHITE, BLUE);
                cprintf("%s\n",tab_Char[n_j][n_i]);
                textcolor(WHITE);
    }else{
        if((tab_Char[n_j][n_i]=('*')||(tab_Char[n_j][n_i]=('B'))||(tab_Char[n_j][n_i]=('T'))){

                textcolor(WHITE);
                cprintf("%s",tab_Char[n_j][n_i]);
           }

    }

}*/

/*
extern void Affichage(char tab_Char[TAILLE][TAILLE], char don){
    int n_i,n_j;
    char tabjoueur = tab_Char;

    for(n_i=0; n_i<TAILLE; n_i++){

        tabjoueur[n_i][0]=don[n_i+1],(' ');
        tabjoueur[0][n_i]=don[n_i+1],(' ');
    }
    tabjoueur[TAILLE][0]=('10');
    tabjoueur[0][TAILLE]=('10');

    for(n_j=0; n_j<TAILLE; n_j++){

        if(tabjoueur[n_j][n_i]==("_ ")||(tabjoueur[n_j][n_i]=("O "))){
                textcolor(BLUE);
                //Color(WHITE, BLUE);
                cprintf("%s\n",tabjoueur[n_j][n_i]);
    }else{
        if((tabjoueur[n_j][n_i]=("* ")||(tabjoueur[n_j][n_i]=("B "))||(tabjoueur[n_j][n_i]=("X "))){

                textcolor(WHITE);
                cprintf("%s",tabjoueur[n_j][n_i]);
           }

    }

}
*/
