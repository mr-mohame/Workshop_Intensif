//Vérifier si un caractère est une voyelle ou une consonne.
#include <stdio.h>
#include <math.h>

int main(){
    char L;

    printf("saisir la letter : \n");
    scanf("%c", &L);

    if(L >= '0' && L <= '9'){
        printf("'%c' est un chiffer.\n", L);
    }else if((L >= 'a' && L <= 'z') || (L >= 'A' && L <= 'Z')){
        if(L == 'a' || L == 'e' || L == 'i' || L == 'o' || L == 'u' || L == 'y' ||
            L == 'A' || L == 'E' || L == 'I' || L == 'O' || L == 'U' || L == 'Y'){
                printf("'%c' est une voyelle.\n", L);
            }else{
                printf("'%c' est une consonne.\n", L);
            }
    }else{
        printf("'%c' est un symbole ou un caractere special.\n", L);
    }
return 0;
    
}