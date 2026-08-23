//Calculer la somme, la différence, le produit et la division de deux nombres.
#include <stdio.h>
int main(){

    int A, B;
    char op;
    printf("saisir la valeur de A : \n");
    scanf("%d",&A);
    printf("saisir la valeur de B : \n");
    scanf("%d",&B);
    
    int sum = A + B;
    int diff = A - B;
    int pro = A * B;
    
    printf("la somme de A et B est: %d\n", sum);
    printf("la différence de A et B est: %d\n", diff);
    printf("la produit de A et B est: %d\n", pro);
    float div = 0;
    if(B != 0){
       div = (float)A / B;
       printf("la division de A et B est: %.2f\n", div);
    }else{
        printf("invalide \n");
    }
   

    return 0;
}