//Calculer l'aire et le périmètre d'un cercle à partir de son rayon.
#include <stdio.h>

int main(){
    int rayon;
    double pi = 3.14159;
    double Aire, perimetre; 

    printf("saisir le rayon : \n");
    scanf("%d", &rayon);

    Aire = pi * rayon * rayon;
    perimetre = 2 * pi * rayon;

    printf("Calcul du Périmètre est : %f\nCalcul de l'Aire est : %f\n", perimetre, Aire);
    return 0;
}