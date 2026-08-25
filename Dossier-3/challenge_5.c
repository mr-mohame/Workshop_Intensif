//Inverser un nombre entier (ex: 1234 -> 4321).
#include <stdio.h>
#include <math.h>

 int main(){
    int N;
    int inverse = 0;
    int reste;
    printf("saisir le nomber N: ");
    scanf("%d", &N);

    int original = N;

    printf("\n");

    while(N != 0){
        reste = N % 10;
        inverse = (inverse * 10) + reste;;
        N = N / 10;
        printf("%d\n", inverse);
    }
    printf("L'inverse de %d est : %d\n", original, inverse);
    return 0;
 }