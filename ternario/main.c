#include <stdio.h>
#include <stdlib.h>

int main()
{

//int x;
//printf("Digite um valor: ");
//scanf("%d", &x);


//!(x < 0) ? printf("O valor e negativo") : printf("O valor e positivo");

   //x < 0 ? printf("O valor e negativo") :
       //x > 0 ? printf("O valor e positivo") : printf("O valor e zero");

    //x <= 0 ? printf("Value okay") : printf("Value very nice");


    int y;

    printf("\nDigite um valor: ");
    scanf("%d", &y);

    y == 0 ? printf("\nValor nulo\n"):
        y < 0 ? printf("\nO valor e negativo\n") : printf("\nO valor e positivo\n");



    return 0;
}

