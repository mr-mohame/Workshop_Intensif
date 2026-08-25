//Calculer le factoriel d'un nombre N!.
#include <stdio.h>
#include <math.h>

 int main(){
    int N;
    int fact=1;
    printf("saisir le nomber N: ");
    scanf("%d", &N);

    printf("\n");
    for(int i=1; i<=N; i++){

       fact = fact * i;

    }
    printf("la factoriel de N = %d est : %d\n", N, fact);

    

    

    return 0;
 }