//Vérifier si un nombre entier est un nombre premier.
#include <stdio.h>
#include <math.h>

int main(){

    int N;
    printf("saisir la valeur de N: \n");
    scanf("%d", &N);

    if(N<=1){
        printf("le nomber %d est pas premier.\n", N);
        return 0;
    }else if (N == 2){
        printf("le nomber %d est  premier.\n", N);
        return 0;
    }
    int S= sqrt(N);
    int est_premier=1;

    for(int i = 2; i<=S; i++){
        if (N % i == 0){
            est_premier = 0;
            break;
        }
    }
    if(est_premier == 1){
        printf("le nomber %d est  premier.\n", N);
    }else{
        printf("le nomber %d est pas premier.\n", N);
    }

    return 0;
}