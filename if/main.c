#include <stdio.h>
#include <stdlib.h>

int main()
{

int v1;
int v2;


printf("Digite um valor: ");
scanf("%d", &v1);

printf("Digite um segundo valor: ");
scanf("%d", &v2);

printf("A soma dos valores digitados e de %d\n", v1+v2);


if(v1 <= 0) {
    printf("O valor digitado e negativo");
}



    return 0;
}
