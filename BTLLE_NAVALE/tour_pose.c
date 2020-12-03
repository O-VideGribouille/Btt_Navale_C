#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

extern void Tour_Pose(char don){

    int joueuractif, n_lim, n_l;
    int ok=0; //booleen, ok=false
    int placement=0; //booleen, ok=false

    //Concerne le joueur 1
    joueuractif=1;
    plateau.chr_carte.tabjoueur1=Inser_bat(plateau.chr_carte.tabjoueur1, Orient_bat(ok, plateau.n_joueur.n_j1.chr_PorteAvion.chr_nom,joueuractif), plateau.n_joueur.n_j1.chr_PorteAvion.n_lim, plateau.n_joueur.n_j1.chr_PorteAvion.n_l);
    Affichage(plateau.chr_carte.tabjoueur1, don);
    plateau.chr_carte.tabjoueur1=Inser_bat(plateau.chr_carte.tabjoueur1, Orient_bat(ok, plateau.n_joueur.n_j1.chr_Croiseur.chr_nom,joueuractif), plateau.n_joueur.n_j1.chr_Croiseur.n_lim, plateau.n_joueur.n_j1.chr_Croiseur.n_l);
    Affichage(plateau.chr_carte.tabjoueur1, don);
    plateau.chr_carte.tabjoueur1=Inser_bat(plateau.chr_carte.tabjoueur1, Orient_bat(ok, plateau.n_joueur.n_j1.chr_ContreTorpilleur.chr_nom,joueuractif), plateau.n_joueur.n_j1.chr_ContreTorpilleur.n_lim, plateau.n_joueur.n_j1.chr_ContreTorpilleur.n_l);
    Affichage(plateau.chr_carte.tabjoueur1, don);
    plateau.chr_carte.tabjoueur1=Inser_bat(plateau.chr_carte.tabjoueur1, Orient_bat(ok, plateau.n_joueur.n_j1.chr_SousMarin.chr_nom,joueuractif), plateau.n_joueur.n_j1.chr_SousMarin.n_lim, plateau.n_joueur.n_j1.chr_SousMarin.n_l);
    Affichage(plateau.chr_carte.tabjoueur1, don);
    plateau.chr_carte.tabjoueur1=Inser_bat(plateau.chr_carte.tabjoueur1, Orient_bat(ok, plateau.n_joueur.n_j1.chr_Torpilleur.chr_nom,joueuractif), plateau.n_joueur.n_j1.chr_Torpilleur.n_lim, plateau.n_joueur.n_j1.chr_Torpilleur.n_l);
    Affichage(plateau.chr_carte.tabjoueur1, don);

    //Concerne le joueur 2
    joueuractif=2;
    plateau.chr_carte.tabjoueur2=Inser_bat(plateau.chr_carte.tabjoueur2, Orient_bat(ok, plateau.n_joueur.n_j2.chr_PorteAvion.chr_nom,joueuractif), plateau.n_joueur.n_j2.chr_PorteAvion.n_lim, plateau.n_joueur.n_j2.chr_PorteAvion.n_l);
    Affichage(plateau.chr_carte.tabjoueur2, don);
    plateau.chr_carte.tabjoueur2=Inser_bat(plateau.chr_carte.tabjoueur2, Orient_bat(ok, plateau.n_joueur.n_j2.chr_Croiseur.chr_nom,joueuractif), plateau.n_joueur.n_j2.chr_Croiseur.n_lim, plateau.n_joueur.n_j2.chr_Croiseur.n_l);
    Affichage(plateau.chr_carte.tabjoueur2, don);
    plateau.chr_carte.tabjoueur2=Inser_bat(plateau.chr_carte.tabjoueur2, Orient_bat(ok, plateau.n_joueur.n_j2.chr_ContreTorpilleur.chr_nom,joueuractif), plateau.n_joueur.n_j2.chr_ContreTorpilleur.n_lim, plateau.n_joueur.n_j2.chr_ContreTorpilleur.n_l);
    Affichage(plateau.chr_carte.tabjoueur2, don);
    plateau.chr_carte.tabjoueur2=Inser_bat(plateau.chr_carte.tabjoueur2, Orient_bat(ok, plateau.n_joueur.n_j2.chr_SousMarin.chr_nom,joueuractif), plateau.n_joueur.n_j2.chr_SousMarin.n_lim, plateau.n_joueur.n_j2.chr_SousMarin.n_l);
    Affichage(plateau.chr_carte.tabjoueur2, don);
    plateau.chr_carte.tabjoueur2=Inser_bat(plateau.chr_carte.tabjoueur2, Orient_bat(ok, plateau.n_joueur.n_j2.chr_Torpilleur.chr_nom,joueuractif), plateau.n_joueur.n_j2.chr_Torpilleur.n_lim, plateau.n_joueur.n_j2.chr_Torpilleur.n_l);
    Affichage(plateau.chr_carte.tabjoueur2, don);
}
