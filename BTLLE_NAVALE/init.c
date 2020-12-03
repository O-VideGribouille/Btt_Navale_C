#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

extern void Init(){

    plateau.n_joueur.n_j1.chr_PorteAvion.n_l=5;
    plateau.n_joueur.n_j2.chr_PorteAvion.n_l=5;
    plateau.n_joueur.n_j1.chr_Croiseur.n_l=4;
    plateau.n_joueur.n_j2.chr_Croiseur.n_l=4;
    plateau.n_joueur.n_j1.chr_ContreTorpilleur.n_l=3;
    plateau.n_joueur.n_j2.chr_ContreTorpilleur.n_l=3;
    plateau.n_joueur.n_j1.chr_SousMarin.n_l=3;
    plateau.n_joueur.n_j2.chr_SousMarin.n_l=3;
    plateau.n_joueur.n_j1.chr_Torpilleur.n_l=2;
    plateau.n_joueur.n_j2.chr_Torpilleur.n_l=2;

    plateau.n_joueur.n_j1.chr_PorteAvion.n_lim=7;
    plateau.n_joueur.n_j2.chr_PorteAvion.n_lim=7;
    plateau.n_joueur.n_j1.chr_Croiseur.n_lim=8;
    plateau.n_joueur.n_j2.chr_Croiseur.n_lim=8;
    plateau.n_joueur.n_j1.chr_ContreTorpilleur.n_lim=9;
    plateau.n_joueur.n_j2.chr_ContreTorpilleur.n_lim=9;
    plateau.n_joueur.n_j1.chr_SousMarin.n_lim=9;
    plateau.n_joueur.n_j2.chr_SousMarin.n_lim=9;
    plateau.n_joueur.n_j1.chr_Torpilleur.n_lim=10;
    plateau.n_joueur.n_j2.chr_Torpilleur.n_lim=10;

    plateau.n_joueur.n_j1.chr_PorteAvion.chr_nom=("porte avion");//strcpy()
    plateau.n_joueur.n_j2.chr_PorteAvion.chr_nom=("porte avion");
    plateau.n_joueur.n_j1.chr_Croiseur.chr_nom=("croiseur");
    plateau.n_joueur.n_j2.chr_Croiseur.chr_nom=("croiseur");
    plateau.n_joueur.n_j1.chr_ContreTorpilleur.chr_nom=("contre-torpilleur");
    plateau.n_joueur.n_j2.chr_ContreTorpilleur.chr_nom=("contre-torpilleur");
    plateau.n_joueur.n_j1.chr_SousMarin.chr_nom=("sous-marin");
    plateau.n_joueur.n_j2.chr_SousMarin.chr_nom=("sous-marin");
    plateau.n_joueur.n_j1.chr_Torpilleur.chr_nom=("torpilleur");
    plateau.n_joueur.n_j2.chr_Torpilleur.chr_nom=("torpilleur");

}
