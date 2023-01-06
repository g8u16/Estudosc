#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;

    printf("1 - Cadastrar produto\n2 - Vender produto\n3 - Buscar produto\n4 - Imprimir\n5 - Sair\n");
    scanf("%d", &opcao);

    switch(opcao) {
    case 1:
        printf("Cadastrando produto. \n");
        break;
    case 2:
        printf("Vendendo produto. \n");
        break;
    case 3:
        printf("Buscando produto. \n");
        break;
    case 4:
        printf("Imprimindo. \n");
        break;
    case 5:
        printf("Saindo..\n");
        break;
    default:
        printf("Opcao invalida!\        An");



    }
    return 0;
}
