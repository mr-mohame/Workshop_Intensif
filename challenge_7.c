//Extraire et afficher le dernier chiffre d'un nombre entier. 
#include <stdio.h>

int main(){
    int N = 1234;
    int b = N % 10;
    printf("%d\n", b);
    
    return 0;
}