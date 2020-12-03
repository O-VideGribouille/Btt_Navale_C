#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

extern void Insert_bat(char tab_Char[TAILLE][TAILLE], char p, int n_lim, int n_l){

    char tab=tab_Char[TAILLE][TAILLE];

    int ok=0;//booeen : false
    int placement=1;//booleen : true

    int n_x, n_y, n_ti, n_j;

    printf("Entrer les coordonees de la pointe du navire joueur %d", joueur ," \n");
    printf("X : ");
    scanf("%d", n_x);
    printf(" Y : ");
    scanf("%d", n_y);

    if((n_x<TAILLE)&&(n_y<TAILLE)){ // verifie si la pointe du navire se trouve dans la carte

        //Manip' horizontal
        if((p==('H'))&&(n_x<n_lim)){ //verifie si le bateau tient dans la carte

            for(i=1; i<n_l; i++){ //verifie s'il y a un bateau sur le chemin

                //if((tab[n_x+i-1][n_y]==("B "))||(tab[n_x+1-1][n_y]==("* "))){
                if((tab[n_x+i-1][n_y]==("B "))||(tab[n_x+i-1][n_y]==("* "))){

                    placement=0; // placement=false // on ne place pas de bateau
                }
            }

            if(placement==1){ //Si l'emplacement est vide, creation d'un bateau

                textcolor(RED);

                if(tab[n_x-1][n_y]==("_ ")){

                    tab[n_x-1][n_y]=("* ");
                }

                if(tab[n_x-1][n_y-1]==("_ ")){

                    tab[n_x-1][n_y-1]=("* ");
                }

                if(tab[n_x-1][n_y+1]==("_ ")){

                    tab[n_x-1][n_y+1]=("* ");
                }
                textcolor(WHITE);

                for(i=1; i=n_l; i++){

                    tab[n_x+i-1][n_y-1]=("* ");
                    tab[n_x+i-1][n_y]=("B ");
                    tab[n_x+i-1][n_y+1]=("* ");

                }
                if((tab[n_x+i][n_y])==("_ ")){

                    tab[n_x+i][n_y])==("* ");
                }

                if((tab[n_x+i][n_y+1])==("_ ")){

                    tab[n_x+i][n_y+1])==("* ");
                }

                if((tab[n_x+i][n_y-1])==("_ ")){

                    tab[n_x+i][n_y-1])==("* ");
                }
                ok=1; //ok=true;
            }
        }

        //Manip' verticale
        if((p==('V'))&&(n_y<n_lim)){ //verifie si le bateau tient dans la carte

            for(i=1; i<n_l; i++){ //verifie s'il y a un bateau sur le chemin

                if((tab[n_x][n_y+i-1]==("B "))||(tab[n_x][n_y+i-1]==("* "))){

                    placement=0; // placement=false // on ne place pas de bateau
                }
            }

            if(placement==1){ //Si l'emplacement est vide, creation d'un bateau

                textcolor(RED);

                if(tab[n_x][n_y-1]==("_ ")){

                    tab[n_x][n_y-1]=("* ");
                }

                if(tab[n_x+1][n_y-1]==("_ ")){

                    tab[n_x+1][n_y-1]=("* ");
                }

                if(tab[n_x-1][n_y+1]==("_ ")){

                    tab[n_x-1][n_y+1]=("* ");
                }
                textcolor(WHITE);

                for(i=1; i=n_l; i++){

                    tab[n_x-1][n_y+i-1]=("* ");
                    tab[n_x][n_y+i-1]=("B ");
                    tab[n_x+1][n_y+i-1]=("* ");

                }

                if((tab[n_x][n_y+i])==("_ ")){

                    tab[n_x][n_y+i])==("* ");
                }

                if((tab[n_x+1][n_y+i])==("_ ")){

                    tab[n_x+1][n_y+i])==("* ");
                }

                if((tab[n_x-1][n_y+i])==("_ ")){

                    tab[n_x-1][n_y+i])==("* ");
                }
                ok=1; //ok=true;
            }
        }
    }

    placement=1; //placement=true


}
