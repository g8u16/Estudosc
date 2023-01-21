#include <stdio.h>
#include <stdlib.h>

int main()
{
    int um, dois, tres, quatro, cinco;
    int negativos = 0, positivos = 0;


    printf("Digite cinco valores: ");
    scanf("%d%d%d%d%d", &um, &dois, &tres, &quatro, &cinco);

    if(um < 0) {
        negativos++;
    }
    else
      positivos++;

    if(dois < 0)
        negativos++;
    else
        positivos++;

    if(tres < 0)
        negativos++;

    else
        positivos++;


    if(quatro < 0)
        negativos++;

    else
        positivos++;

    if(cinco < 0)
        negativos++;

    else
        positivos++;

printf("\nTemos %d\nvalores positivos\n", positivos);
printf("\nTemos %d\nvalores negativos\n", negativos);



    return 0;
}
