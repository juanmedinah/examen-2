//ejercicio 1 operaciones aleatorias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcion;
    srand(time(NULL));

    do {
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Terminar el programa\n");
        printf("Seleccione una opcion (1-5): ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            int num1 = rand() % 10 + 1;
            int num2 = rand() % 10 + 1;
            float resultado;

            switch (opcion) {
                case 1:
                    resultado = num1 + num2;
                    printf("Suma de %d + %d = %.2f\n", num1, num2, resultado);
                    break;
                case 2:
                    resultado = num1 - num2;
                    printf("Resta de %d - %d = %.2f\n", num1, num2, resultado);
                    break;
                case 3:
                    resultado = num1 * num2;
                    printf("Multiplicacion de %d * %d = %.2f\n", num1, num2, resultado);
                    break;
                case 4:
                    if (num2 == 0) {
                        printf("No se puede dividir por cero.\n");
                    } else {
                        resultado = (float)num1 / num2;
                        printf("División de %d / %d = %.2f\n", num1, num2, resultado);
                    }
                    break;
            }
        } else if (opcion == 5) {
            printf("Programa terminado.\n");
        } else {
            printf("Opcion no válida. Por favor, seleccione una opcion valida (1-5).\n");
        }

    } while (opcion != 5);

    return 0;
}

