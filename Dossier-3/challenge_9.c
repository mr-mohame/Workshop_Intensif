//Afficher un triangle d'étoiles de hauteur N.
#include <stdio.h>

int main() {
    // Write C code here
    int N = 5;

    for(int i=1; i <= N; i++){
        
        for(int j = 1; j<= N-i; j++){
            printf(" ");
        }
        for(int k = 1; k <= (2 * i - 1); k++){
            printf("*");
        }
       //printf("");
        printf("\n");

    }
    

    return 0;
}