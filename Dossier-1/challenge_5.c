//Convertir une température de Celsius en Fahrenheit (F = C * 1.8 + 32). 
#include <stdio.h>

int main(){
    int celsius;
    int Fahrenheit;

    printf("saisir la temerature en celsius : \n");
    scanf("%d", &celsius);

    Fahrenheit = celsius * 1.8 + 32;
    printf("la temperateur en Fahrenheit est : %d\n", Fahrenheit);
    return 0;
}