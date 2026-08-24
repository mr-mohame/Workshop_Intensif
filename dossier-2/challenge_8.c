//Résoudre une équation du premier degré ax + b = 0.
#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    float x;
    printf("saisr les valeurs de a et b :\n");
    scanf("%d %d", &a, &b);
    
    if(a > 0){
        x = (-b)/a;
        printf("Léquation a une seule et unique solution : %.2f\n",x);

    }else if(a == 0 && b !=  0) {
        printf("L'équation n'a aucune solution.\n");

    }else{
        printf("L'équation admet une infinité de solutions\n");

    }

    return 0;
}