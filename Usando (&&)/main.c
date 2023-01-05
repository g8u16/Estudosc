#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char sexo;




    printf("Digite seu sexo M/F: ");
    sexo = getc(stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

  if(sexo == 'm' && idade == 18) {

    printf("\nAlistamento obrigatorio\n");

  }
  else
    printf("\nDispensado\n");











    return 0;
}
