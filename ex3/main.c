#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if(valor % 2 || valor % 3 || valor % 5) {
        printf("O valor e divisivel");
    } else
        printf("O valor nao e divisivel");



    return 0;
}
