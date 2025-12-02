#include <stdio.h>

int main() {

    //declarar as variaveis
    char produtoA [30] = "A" ;
    char produtoB [30] = "B" ;

    unsigned int estoqueA = 1000 ;
    unsigned int estoqueB = 2000 ;

    float valorA = 10.50 ;
    float valorB = 20.40 ;

    unsigned int estoqueminimoA = 500 ;
    unsigned int estoqueminimoB = 2500 ;

    int resultadoA, resultadoB;

    //exibir informacoes
    printf ("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoA,estoqueA,valorA);
    printf ("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n",produtoB,estoqueB,valorB);

    //COMPARAÇÕES COM O VALOR MINIMO DE ESTOQUE

    resultadoA = estoqueA>estoqueminimoA;
    resultadoB = estoqueB>estoqueminimoB;

    printf("O produto %s tem estoque minimo? %d\n", produtoA,resultadoA);
    printf("O produto %s tem estoque minimo? %d\n", produtoB,resultadoB);


    //COMPARAÇÃO ENTRE VALORES TOTAIS DOS PRODUTOS

    printf("Valor total de A (R$%.2f) é maior que o valor total de B (R$%.2f)? %d", (valorA*estoqueA), (valorB*estoqueB),(valorA*estoqueA>valorB*estoqueB));


    return 0 ;

}
