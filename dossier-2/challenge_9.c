//Valider la possibilité de former un triangle à partir de 3 longueurs. sans code
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("saisr les valeurs de a et b :\n");
    scanf("%d %d %d", &a, &b, &c);

    if((a + b > c) && (a + c > b) && (b + c > a)){
        printf("le triangle est valide.\n");
    }else{
        printf("impossible de former un triangle avec ces longueurs.\n");
    }
    return 0;
}