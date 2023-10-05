//ejercicio 4 intercambio de valores
#include <stdio.h>

int main() {
    int v1, v2, v3, temp;

    printf("Introduzca el valor de v1: ");
    scanf("%d", &v1);

    printf("Introduzca el valor de v2: ");
    scanf("%d", &v2);

    printf("Introduzca el valor de v3: ");
    scanf("%d", &v3);

    temp = v1;
    v1 = v2;
    v2 = v3;
    v3 = temp;

    printf("Después del intercambio:\n");
    printf("v1: %d\n", v1);
    printf("v2: %d\n", v2);
    printf("v3: %d\n", v3);

    return 0;
}

