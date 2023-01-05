#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo = 'm';

    printf("Digite o seu sexo M ou F: ");
    scanf("%c", &sexo);

    printf("Seu sexo e %c\n", sexo);
    return 0;
}
