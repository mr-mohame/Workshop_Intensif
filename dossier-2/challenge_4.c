//Vérifier si une année est bissextile.
#include <stdio.h>
#include <math.h>

int main(){
    int annee;
    printf("saisir lannee : \n");
    scanf("%d", &annee);

    if(annee % 400 == 0){
        printf("l'annee %d est Bissextile . \n", annee);

    }else if(annee % 100 == 0){
        printf("l'annee %d est pas bissextile . \n", annee);

    }else if(annee % 4 == 0){
        printf("l'annee %d est bissextile . \n", annee);

    }else{
        printf("l'annee %d est normale \n", annee);

    }
    return 0;
}