#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias;

    printf("Fevereiro == 28 dias")
    printf("Digite a quantidade de messes \"de 1 a 12\": ");
    scanf("%d", &dias);


    switch(dias) {

case 1:
    printf("\nUm mes tem \"28 dias\" ");
    break;

case 2:
    printf("\nDois messes tem \"58 dias\" ");
    break;
case 3:
    printf("\nTres messes tem \"88 dias\" ");
    break;

case 4:
    printf("\nQuatro messes tem \"108 dias\" ");
    break;

case 5:
    printf("\nCinco messes tem \"138 dias\" ");
    break;

case 6:
    printf("\nSeis messes tem \"168 dias\" ");
    break;

case 7:
    printf("\nSete messes tem \"198 dias\" ");
    break;

case 8:
    printf("\nOuto messes tem \"228 \" ");
    break;

case 9:
    printf("\nNove messes tem \"258 dias \" ");
    break;

case 10:
    printf("\nDez messes tem \"288 dias \" ");
    break;

case 11:
    printf("\nOnze messes tem \"308 dias\" ");
    break;

case 12:
    printf("\nDoze messes tem \"362 dias\" ");

default:
    printf("\nValor invalido!");





    }
    return 0;
}
