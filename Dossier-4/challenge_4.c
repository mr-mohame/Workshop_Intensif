// Trouver le Plus Grand Commun Diviseur (PGCD) de deux nombres.
 #include <stdio.h>
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
// on a peux travaille avec deux methode 
    //reste = A % B;
    //while(reste != 0){
     //   A = B;
     //   B = reste;
     //   reste = A % B;
    //}

    while(B != 0){
        reste = A % B;
        A = B;
        B = reste;
    }
    printf("Le PGCD de %d et %d est donc : %d\n", copie_A, copie_B, A);
    return 0;
 }