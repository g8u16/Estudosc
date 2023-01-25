#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vogal;

    printf("Digite uma letra: ");
    scanf("%c", &vogal);


    if(vogal == 'a' || vogal == 'e')
        printf("\nA letra %c e uma vogal\n", vogal);
    else if(vogal == 'i' || vogal == 'o')
        printf("\nA letra %c e uma vogal\n", vogal);
    else if(vogal == 'u')
        printf("\nA letra %c e uma vogal\n", vogal);

    else
        printf("\nA letra digitada a uma consoante\n");
    return 0;
}
