//Calculer la distance euclidienne entre deux points A(x1, y1) et B(x2, y2).
#include <stdio.h>
#include <math.h>

int main(){

    int x1, x2, y1, y2;
    int x, y;

    printf("saisir la valeur de x1: \n");
    scanf("%d", &x1);
    printf("saisir la valeur de x2: \n");
    scanf("%d", &x2);
    printf("saisir la valeur de y1: \n");
    scanf("%d", &y1);
    printf("saisir la valeur de y2: \n");
    scanf("%d", &y2);

    x = x1 - x2;
    int x_carree = x * x;
    y = y1 - y2;
    int y_carree = y * y;
    int som_carree = x_carree + y_carree;
    int resultat_final = sqrt(som_carree);

    printf("la distance euclidienne entre deux points est: %d\n", resultat_final);

    return 0;
}