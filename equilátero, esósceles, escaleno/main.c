#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int ab;


    printf("Digite os valores: ");
    scanf("%d%d%d", &a, &b, &c);

    ab = a + b;


    if(c > ab) {
        printf("\nOs valores digitados nao podem formar um triagulo!\n");
    } else if(a == b && a == c && b == a && b == c && c == a && c == b)
        printf("\nOs valores  formam um triagulo equilatero!\n");
      else if(a != b && a != c && b != a && b != c && c != a && c != b)
            printf("\nOs valores digitados formam um triagulo escaleno!\n");
      else if(a == b || a == c || b == c)
          printf("\nOs valores digitados formam um triagulo esosceles!\n");
    return 0;
}
