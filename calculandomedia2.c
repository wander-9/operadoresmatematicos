#include <stdio.h>

int main(){
    int nota1, nota2;

    printf("PRIMEIRA NOTA: ");
    scanf("%d", &nota1);
    printf("SEGUNDA NOTA: ");
    scanf("%d", &nota2);

    int media= (nota1+nota2)/2;
    
    printf("A média das notas é : %d \n", media);
}