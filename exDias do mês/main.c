#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias;

    printf("Digite a quantidade de messes \"de 1 a 12\": ");
    scanf("%d", &dias);


    switch(dias) {

case 1:
    printf("\nUm mes tem \"30 dias\" ");
    break;

case 2:
    printf("\nDois messes tem \"60 dias\" ");
    break;
case 3:
    printf("\nTres messes tem \"90 dias\" ");
    break;

case 4:
    printf("\nQuatro messes tem \"120 dias\" ");
    break;

case 5:
    printf("\nCinco messes tem \"150 dias\" ");
    break;

case 6:
    printf("\nSeis messes tem \"180 dias\" ");
    break;

case 7:
    printf("\nSete messes tem \"210 dias\" ");
    break;

case 8:
    printf("\nOuto messes tem \"240 \" ");
    break;

case 9:
    printf("\nNove messes tem \"270 dias \" ");
    break;

case 10:
    printf("\nDez messes tem \"300 dias \" ");
    break;

case 11:
    printf("\nOnze messes tem \"330 dias\" ");
    break;

case 12:
    printf("\nDoze messes tem \"362 dias\" ");

default:
    printf("\nValor invalido!");





    }
    return 0;
}
