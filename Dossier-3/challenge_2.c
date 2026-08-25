//Calculer la somme des N premiers entiers naturels.
 #include <stdio.h>
 #include <math.h>

 int main(){
    int N;
    printf("saisir le nomber N: ");
    scanf("%d", &N);

    printf("\n");
    int sum = N*(N+1)/2;

    printf(" la somme des %d premiers entiers est : %d\n", N, sum);

    

    return 0;
 }