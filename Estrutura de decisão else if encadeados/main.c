#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Um valor: ");
    scanf("%d", &x);


    if(x < 0)
        printf("\nValor = negativo\n");
    else if(x > 0)
        printf("\nValor = positivo\n");
    else
        printf("\nValor = 0\n");

    return 0;
}
