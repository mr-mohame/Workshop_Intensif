//Déterminer si un nombre est positif, négatif ou nul.
#include <stdio.h>
#include <math.h>

int main(){
    int N;
    printf("saisir la valeur de N : \n");
    scanf("%d", &N);
    if(N == 0){
        printf("le nomber N = %d est nul\n", N);
    }else if ( N > 0){
        printf("le nomber N = %d est positif\n", N);
    }else{
        printf("le nomber N = %d est negative\n", N);
    }
    return 0;
}