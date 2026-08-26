//Trouver le Plus Petit Commun Multiple (PPCM) de deux nombres.  #include <stdio.h>
 #include <math.h>

 int main(){

    int A, B;
    do{
        printf("saisir la valeur de A : \n");
        scanf("%d", &A);
        printf("saisir la valeur de B : \n");
        scanf("%d", &B);
    }while(A <= B);
    int reste;
    int copie_A = A, copie_B = B;
    while(B != 0){
        reste = A % B;
        A = B;
        B = reste;
    }

    int mult = copie_A * copie_B;
    int div_pgcd = mult / A;
    printf("Le PGCD de %d et %d est donc : %d\n", copie_A, copie_B, A);
    printf("Le PPCM de %d et %d est donc : %d\n", copie_A, copie_B, div_pgcd);
    return 0;
 }