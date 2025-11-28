#include <stdio.h>

int main () {

    int numero1 = 10, resultado;

    printf ("Antes de incrementar numero1 : %d\n" , numero1);

    resultado = numero1++ ;
    printf ("resultado : %d, numero: %d\n" , resultado, numero1);

    numero1 --;
    printf("numero1 : %d\n" , numero1);


}