#include <stdio.h>
#include <stdlib.h>

int main()
{
    char option;

    printf("a - Register product\nb - Sell product\nc - Search product\nx - Exit\n");
    scanf("%c", &option);

    switch(option) {
    case 'a':
        printf("\nRegistering product..\n");
        break;
    case 'b':
        printf("\nSelling product..\n");
        break;
    case 'c':
        printf("\nSearching product..\n");
        break;
    case 'x':
        printf("\nExiting..n");
        break;
    default:
        printf("\nInvalid value");



    }

    return 0;
}
