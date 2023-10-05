//ejercicio 6 errores
#include <stdio.h>

int main() {
    int n1, n2, resultado, suma;

    printf("Introduzca un numero:\n");
    scanf("%d", &n1);

    printf("Introduzca otro numero:\n");
    scanf("%d", &n2);

    resultado = n1 + n2; // Usar "=" en lugar de "=="

    printf("Cuanto suman?:\n");
    scanf("%d", &suma);

    if (suma == resultado) { // Eliminar punto y coma después de la condición if
        printf("Correcto\n");
    } else {
        printf("INCORRECTO: La suma es %d\n", resultado); // Usar "%d" para imprimir enteros, no "%x"
    }

    return 0;
}
