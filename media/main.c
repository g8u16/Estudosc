#include <stdio.h>
#include <stdlib.h>

int main()
{

float v1, v2, v3, v4, mediapo, mediaaritmetica;


int m;


printf("Notas do aluno: ");
scanf("%f%f%f%f", &v1, &v2, &v3, &v4);

printf("\t\t\t\t\tEscolha um modo de calculo de media abaixo");

printf("\n1- Media aritmetica\n2- Meida ponderada\n");
scanf("%d", &m);


switch(m) {
case 1:
    mediaaritmetica = v1+v2+v3+v3/4;
    printf("A media do aluno e de %.2f\n", mediaaritmetica);
    break;

case 2:
    mediapo = (v1+v2)*(v3+v4)/v1+v2+v3+v4;
    printf("A media do aluno e de %.2f\n", mediapo);
    break;

default:
    printf("Valor invalido!");


    return 0;
    }
}
