#include <stdio.h>
#include <stdlib.h>

int main()
{

int v1, v11;
int v2, v22;
int v3, v33;
float v4, v44;


printf("Digite dois valores para somar: ");
scanf("%d%d", &v1, &v11);



printf("Digite dois valores para subtrair: ");
scanf("%d%d", &v2, &v22);



printf("Digite dois valores para multiplicar: ");
scanf("%d%d", &v3, &v33);



printf("Digite dois valores para dividir: ");
scanf("%f%f", &v4, &v44);


printf("Soma: %d\n", v1 + v11);
printf("Subtracao: %d\n", v2 - v22);
printf("Multiplicacao: %d\n", v3 * v33);
printf("Divisao: %d\n", v4 / v44);

    return 0;
}
