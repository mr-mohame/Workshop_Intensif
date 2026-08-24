// Convertir une durée saisie en secondes en heures, minutes et secondes.
#include <stdio.h>

int main(){

    int minutes;
    int hours;
    int secondes;
    int rest;
    printf("saisir les secondes: \n");
    scanf("%d", &secondes);
    
    hours = secondes / 3600; 
    rest = secondes % 3600;
    minutes = rest / 60;

    printf("l'hours: %d\nle minutes: %d\nles secondes: %d\n", hours, minutes, secondes);
    return 0;
}