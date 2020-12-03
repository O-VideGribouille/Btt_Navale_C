#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

extern void Orient_bat(int ok, char ship, int joueuractif){

    char p;

    //ok est un booleen
    do{

        printf("Joueur", joueuractif,", inseration de votre ", ship," horizontalement (H) iu verticalement (V) ? \n");
        scanf("%c \n", p);

        if((p==('H'))||(p==('V'))){

            ok=1; //ok=true;
        }
    }while(ok==0);

}
/*
extern void Orient_bat(int &ok, char &ship, int &joueuractif){

    char p;

    //ok est un booleen
    do{

        printf("Joueur", joueuractif,", inseration de votre ", ship," horizontalement (H) iu verticalement (V) ? \n");
        scanf("%c \n", p);

        if((p==('H'))||(p==('V'))){

            &ok=1; //ok=true;
        }
    }while(&ok==0);

}*/

