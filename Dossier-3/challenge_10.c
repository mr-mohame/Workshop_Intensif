// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int N = 2345;
    int somme = 0;

    while(N > 0){
        int rest = N % 10;
        somme = somme + rest;
        N = N / 10;
        

    }
    printf("%d\n", somme);
    
    

    return 0;
}