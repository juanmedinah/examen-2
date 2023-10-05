//ejercicio 3 mitad piramide
#include <stdio.h>

int main() {
    int lineas;

    printf("Numero de lineas en la piramide: ");
    scanf("%d", &lineas);

    for (int i = 1; i <= lineas; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

