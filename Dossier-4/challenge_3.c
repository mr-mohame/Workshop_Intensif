//Vérifier si un nombre est un nombre d'Armstrong.
#include <stdio.h>
#include <math.h>

int main(){
    int N;
    do{
        printf("saisir un nomber superieur ou egale a 10 :");
        scanf("%d", &N);
    }while(N <= 9);

    int N_chiffer = 0;
    int new_nomber = N;
    while(new_nomber > 0){
        new_nomber = new_nomber /10;
        N_chiffer = N_chiffer + 1;
    }
    int somme = 0;
    int copie_N = N;

    while(copie_N > 0) {
        int dernier_chiffer = copie_N % 10;
        
        int puissance = 1;
        for(int i = 0; i < N_chiffer; i++) {
            puissance = puissance * dernier_chiffer;
        }
        
        somme = somme + puissance;
        copie_N = copie_N / 10;
    }


    if(somme == N){
        printf("le nomber N= %d, est un nomber d'armstrong\n", N);
    }else{
        printf("le nomber N= %d, n'est pas un nomber d'armstrong\n", N);
    }


    return 0;
}