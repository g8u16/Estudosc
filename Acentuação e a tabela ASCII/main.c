#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    printf("%s\n", setlocate(LC_ALL, NULL));

    printf("Loco��o\n");
    return 0;
}
