//Compter le nombre de chiffres composant un entier.
#include <stdio.h>
#include <math.h>

 int main(){
    int N;
    int inverse = 0;
    int reste;
    int comp=0;
    printf("saisir le nomber N: ");
    scanf("%d", &N);

    int original = N;

    printf("\n");

    while(N != 0){
        reste = N % 10;
        comp = comp + 1;
        inverse = (inverse * 10) + reste;;
        N = N / 10;
        printf("%d\n", inverse);
    }
    printf("Le compteur de %d est : %d\n", original, comp);
    return 0;
 }