#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int maior;
    int menor;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a < b) {
        if(a < c)
            menor = a;
        else
            menor = b;

    } else {
        if(b < c)
            menor = b;
        else
            menor = c;

    } if(c < a){
        menor = c;

    } else
    menor = a;

    if(a > c) {
        maior = a;

    }  else
        maior = c;

    if(b > c) {
        maior = b;
    } else
       maior = c;






printf("\nO maior valor e = %d\n", maior);
printf("\nO menor valor e = %d\n", menor);


    return 0;
}

