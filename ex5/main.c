#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);


    if(valor % 2 == 0 || valor % 3 == 3 || valor % 5 == 0)
        printf("\nE divisivel por 2, 3, e 5\n");
    else
        printf("\nNao e divisivel por 2, 3, e 5\n");


    return 0;
}
