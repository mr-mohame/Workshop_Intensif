//Calculer la puissance a^b sans utiliser pow(). sans code
#include <stdio.h>
#include <math.h>

 int main(){
    int a, n;
    int resultat=1;
    printf("saisir le nomber a: ");
    scanf("%d", &a);
    printf("saisir la puissance n: ");
    scanf("%d", &n);

    printf("\n");

    for(int i=1; i<=n; i++){
        resultat = resultat * a;
    
    }        
      printf("%d a la puissance %d est : %d\n", a, n, resultat);


    return 0;
 }