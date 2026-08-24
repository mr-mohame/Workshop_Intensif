//Déclarer, initialiser et afficher int, float, double, char.
#include <stdio.h>

int main(){
    int age = 28;
    float prix = 26.3;
    double montant = 220666.3334234;
    char L = 'M';
    char name[50] = "bonjour moroune";
    printf("age est: %d\n", age);
    printf("prix est: %f\n", prix);
    printf(" montant est: %.2lf\n", montant);
    printf("litter est: %c\n", L);
    printf("name est : %s\n", name);




    return 0;
}