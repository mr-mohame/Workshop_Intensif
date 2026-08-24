//Vérifier si un nombre est pair ou impair.
#include <stdio.h>
#include <math.h>

int main(){
    int N;
    printf("saisir la valeur de N : \n");
    scanf("%d", &N);

    if(N % 2 == 0){
        printf("le number N = %d est pair \n", N);
    }else{
        printf("le number N = %d est impair \n", N);
    }


    return 0;

}    