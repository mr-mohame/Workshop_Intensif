//Trouver le maximum entre trois nombres entiers.
#include <stdio.h>
#include <math.h>

int main(){
    int A, B, C, max;
    printf("sisier les valeur de A, B et C:\n");
    scanf("%d %d %d", &A, &B, &C);

    if(A >= B && A >= C){
        max = A;
    }else if(B >= A && B >= C){
        max = B;
    }else{
        max = C;
    }
    printf("le nomber maximum est: %d\n", max);
    return 0;
}