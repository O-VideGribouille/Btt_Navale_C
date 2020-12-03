#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

extern void Jeu(){

    int fin=0; //booleen, fin=false;
    int joueuractif;

    do{
        if(fin==0){
            joueuractif=1;
            plateau.chr_carte.tabjoueurattaque1=Attaque(plateau.chr_carte.tabjoueur2, plateau.chr_carte.tabjoueurattaque1, don, joueuractif);
            fin=Condition_Final(plateau.chr_carte.tabjoueurattaque1);
        }

        if(fin==0){
            joueuractif=2;
            plateau.chr_carte.tabjoueurattaque2=Attaque(plateau.chr_carte.tabjoueur1, plateau.chr_carte.tabjoueurattaque2, don, joueuractif);
            fin=Condition_Final(plateau.chr_carte.tabjoueurattaque2);
        }

    }while(fin==0);

    if(joueuractif==1){
        printf("Joueur1 gagne la partie");
    }
    if(joueuractif==2){
        printf("Joueur2 gagne la partie");
    }

}
