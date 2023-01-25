#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, convertido;
    int opcao;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("\n1 - Converter de real para dolar\n2 - Converter de dolar para real\n");
    scanf("%d", &opcao);


    switch(opcao) {
    case 1:
        convertido = valor / 5.21;
        printf("Valor convertido em $.2%f\n", convertido);
        break;
    case 2:
        convertido = valor * 5.21;
        printf("Valor convertido em R$.2%d\n", convertido);
        break;
    default:
        printf("Valor indefinido!");

    }


    return 0;
}
