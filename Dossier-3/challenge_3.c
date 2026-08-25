//Afficher la table de multiplication d'un nombre donné.
 #include <stdio.h>
 #include <math.h>

 int main(){
    int N;
    printf("saisir le nomber N: ");
    scanf("%d", &N);

    printf("\n");
    for(int i=0; i<=N; i++){

       int mult = N * i;

        printf("- %d * %d = %d\n", N, i, mult);

    }

    

    

    return 0;
 }