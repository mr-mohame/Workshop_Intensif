//Classer une note (A, B, C, D, F) selon la valeur saisie.
#include <stdio.h>
#include <math.h>

int main(){
    int note;
    char classe;
    printf("saisir la note : \n");
    scanf("%d", &note);

    if(note < 0 || note > 100){
        printf(" erreur : la note doit enter 0 et 100\n");
        return 1;
    } 

    if(note >= 90){
        classe = 'A';

    }else if(note <90 && note >= 80){
        classe = 'B';

    }else if(note <80 && note >= 70){
        classe = 'C';
        
    }else if(note <70 && note >= 60){
        classe = 'D';
        
    }else{
        classe = 'F';

    }

    printf("pour une note de %d/100, le classeur est : %c\n", note, classe);
    return 0;
}