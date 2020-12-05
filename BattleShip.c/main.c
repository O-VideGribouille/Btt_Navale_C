#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeur.h"

int main()
{
    int KO=0;

    printf("Bataille Navale \n");
    printf("Pour deux joueurs, en deux phases : placement, puis attaque\n");
    printf("le jeu se termine quand l'un des joueurs perds la totalite de ses bateaux. \n\n");
    //fflush(stdin);
    Init(&plateau);
    Affichage(plateau.chr_initcarte.tabJ1); //reutiliser la procedure, mais changer l'argument,
    PoseBat(&plateau.chr_initcarte.tabJ1, plateau.n_joueur.n_j1);
    system("pause");
    system("cls");
    Affichage(plateau.chr_initcarte.tabJ2);
    PoseBat(&plateau.chr_initcarte.tabJ2, plateau.n_joueur.n_j2);
    system("pause");
    system("cls");
    do{
        Attaque(plateau.chr_initcarte.tabJ2, &plateau.chr_attcarte.tabJatt1, &plateau.n_joueur.n_j2);
        system("cls");
        Attaque(plateau.chr_initcarte.tabJ1,&plateau.chr_attcarte.tabJatt2, &plateau.n_joueur.n_j1);
        system("cls");

        if((plateau.n_joueur.n_j2.chr_PorteAvion.n_vie==0)&&(plateau.n_joueur.n_j2.chr_Croiseur.n_vie==0)&&(plateau.n_joueur.n_j2.chr_ContreTorpilleur.n_vie==0)&&(plateau.n_joueur.n_j2.chr_SousMarin.n_vie==0)&&(plateau.n_joueur.n_j2.chr_Torpilleur.n_vie==0)){
    //if(plateau.n_joueur.n_j2.chr_PorteAvion.n_vie==0){
        KO=1;
    }

        if((plateau.n_joueur.n_j1.chr_PorteAvion.n_vie==0)&&(plateau.n_joueur.n_j1.chr_Croiseur.n_vie==0)&&(plateau.n_joueur.n_j1.chr_ContreTorpilleur.n_vie==0)&&(plateau.n_joueur.n_j1.chr_SousMarin.n_vie==0)&&(plateau.n_joueur.n_j1.chr_Torpilleur.n_vie==0)){
    //if(plateau.n_joueur.n_j1.chr_PorteAvion.n_vie==0){
        KO=2;
    }

    }while(KO==0);



    if(KO==1){

        printf("VICTOIRE Joueur 1 ");
    }else if(KO==2){

        printf("VICTOIRE Joueur 2 ");
    }


}
