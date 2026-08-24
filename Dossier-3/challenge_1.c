// Afficher les nombres de 1 à 100 avec une boucle for.
 #include <stdio.h>
 #include <math.h>

 int main(){
    int b= 0;

    for(int i=1; i<=100; i++){
        printf("%d ", i);
        if(i % 10 == 0){
            printf("\n");
        }
    }
    return 0;
 }