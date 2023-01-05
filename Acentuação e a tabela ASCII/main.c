#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    printf("%s\n", setlocate(LC_ALL, NULL));

    printf("Locoção\n");
    return 0;
}
