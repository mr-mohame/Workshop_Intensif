//Déterminer si un caractère est majuscule, minuscule, chiffre ou symbole.
#include <stdio.h>
#include <math.h>

int main(){
    char L;

    printf("saisir la letter : \n");
    scanf("%c", &L);

    if(L >= '0' && L <= '9'){
        printf("'%c' est un chiffer.\n", L);
    }else if(L >= 'a' && L <= 'z'){
        printf("'%c' est un minuscule .\n", L);
        
    }else if(L >= 'A' && L <= 'Z'){
        printf("'%c' est un majuscule .\n", L);
    }else{
        printf("'%c' est un symbole ou un caractere special.\n", L);
    }
return 0;
    
}