//ejercicio 2 multiplo de 3
#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero % 3 == 0) {
        printf("%d es multiplo de 3\n", numero);
    } else {
        printf("%d no es multiplo de 3\n", numero);
    }

    return 0;
}

