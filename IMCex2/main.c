#include <stdio.h>
#include <stdlib.h>

int main()
{
    float massa, altura, imc;


    printf("Peso e altura: ");
    scanf("%f%f", &massa, &altura);

    imc = massa / (altura * altura);

    if (imc < 18.5)
        printf("\nAbaixo do peso\n");
    else if(imc >= 18.5 && imc < 25)
        printf("\nPeso normal\n");

    else if(imc >= 25 && imc < 30)
        printf("\nSobrepeso\n");

    else if(imc >= 30 && imc < 35)
        printf("\nObsidade grau 1\n");

    else if(imc >= 35 && imc < 40)
        printf("\nObsidade grau 2\n");
    else if(imc >= 40)
        printf("\nObsidade grau 3\n");








    return 0;
}
