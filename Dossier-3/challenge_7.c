//Afficher tous les nombres pairs entre 1 et N.
#include <stdio.h>
#include <math.h>

 int main(){
    int N;
    
   
    printf("saisir le nomber N: ");
    scanf("%d", &N);

    printf("\n");
    for(int i = 1; i<= N; i++){
        if(i % 2 == 0){
            printf("le nomber %d est pairs\n", i);
        }

    }
    return 0;
 }