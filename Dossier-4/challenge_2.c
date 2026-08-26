//Générer et afficher les N premiers termes de la suite de Fibonacci.
#include <stdio.h>
#include <math.h>

int main(){
    int N;
    int somme=0;
    int a=0, b=1;


    printf("saisir la valeur de N : \n");
    scanf("%d", &N);
    printf("*************************\n");
    if(N <= 0){
        return 0;
    }
    if(N == 1){
        printf("%d\n", a);
        return 0;
    }
    printf("*************************\n");
    printf("terme : %d\n", a);
    printf("terme : %d\n", b);


    for(int i=3; i < N; i ++){
        somme = a + b;
        printf("terme %d : %d = %d + %d\n", i + 1, somme, a, b);
        a = b;
        b = somme;
        
    }
    printf("*************************\n");
    

    return 0;
}