//Calculer la moyenne de 4 notes saisies par lutilisateur.
#include <stdio.h>

int main(){
    float eleve1 = 12.3;
    float eleve2 = 9.04;
    float eleve3 = 18.99;
    float eleve4 = 3.00;

    float moyenne = (eleve1 + eleve2 + eleve3 + eleve4) / 4;
    printf("la moyenne est ; %.2f\n", moyenne);
    
    
    return 0;
}