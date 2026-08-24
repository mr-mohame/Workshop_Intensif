//Permuter les valeurs de deux variables (avec et sans variable temporaire).
#include <stdio.h>
int main(){

    int a = 50;
    int b = 20;
    int temp;
    // avec temporaire
    printf("avec temporaire\n");
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\nb = %d\n", a, b);
    

    // sans temporaire
    printf("sans temporaire\n");
     a = a + b; 
     b = a - b; 
     a = a - b; 
    printf("a = %d\nb = %d\n", a, b);




    return 0;
}