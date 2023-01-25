#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Digite um valor de 1 a 12: ");
    scanf("%d", &valor);

    switch(valor) {
    case 1:
        printf("O numero corresponde a janeiro");
        break;

    case 2:
        printf("\nO numero corresponde a fevereiro\n");
        break;
    case 3:
        printf("\nO numero corresponde a marco\n");
        break;
    case 4:
        printf("\nO numero corresponde a abril\n");
        break;
    case 5:
        printf("\nO numero corresponde a maio\n");
        break;
    case 6:
        printf("\nO numero corresponde a junho\n");
        break;
    case 7:
        printf("\nO numero corresponde a julho\n");
        break;
    case 8:
        printf("\nO numero corresponde a agosto\n");
        break;
    case 9:
        printf("\nO numero corresponde a setembro\n");
        break;

    case 10:
        printf("\nO numero correspode a outubro\n");
        break;

    case 11:
        printf("\nO numero corresponde a novembro\n");
        break;

    case 12:
        printf("\nO numero corresponde a dezembro\n");
        break;

    default:
        printf("\nValor invalido\n");

    }


    return 0;
}
