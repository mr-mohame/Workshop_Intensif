//Trouver tous les nombres premiers dans un intervalle $[A, B]$.
#include <stdio.h>
#include <math.h>


int main(){

    int A, B;

    do{
        printf("saisir la valeur de A : \n");
        scanf("%d", &A);
        printf("saisir la valeur de B (doit etre >= A) : \n");
        scanf("%d", &B);

        if(A > B){
            printf("Erreur ! la valeur B doit >= a A.\n");
        }

    }while(A > B);
    

    for (int i = A; i <= B; i++){
        int est_premier = 1;

        if(i <= 1){
            est_premier = 0;

        } else {
            for(int div = 2; div * div <= i; div++){
                if(i % div == 0){
                    est_premier = 0;
                    break;
                }
            }
        }
        if (est_premier == 1){
            printf("%d est un premier\n", i);
        }else{
            printf("%d n'est pas un premier\n", i); 
        }
    }
    


    return 0;
}