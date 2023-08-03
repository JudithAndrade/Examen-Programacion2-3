#include <stdio.h>

// Función para encontrar las combinaciones de posiciones que suman al número objetivo
void SUMA(int vector[], int size, int objetivo) {
    int encontrado = 0; // Variable para determinar si se encontraron combinaciones válidas

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (vector[i] + vector[j] == objetivo) {
                // Si se encontró una combinación, mostramos el mensaje con el número objetivo y las posiciones
                printf("La suma es %d: [%d] y [%d]\n", objetivo, i, j);
                encontrado = 1; // Marcamos que se encontró al menos una combinación válida
            }
        }
    }

    // Si no se encontraron combinaciones válidas, mostramos un mensaje
    if (!encontrado) {
        printf("No se encontraron combinaciones que sumen al número objetivo\n");
    }
}
int main() {
    int tamano;
    printf("Ingrese el tamano del vector: ");
    //0 1 1 2 3 5 8 -13 21 -33 54 7
    scanf("%d", &tamano);

    int V[tamano];
    printf("Ingrese los elementos del vector:\n");
    for (int i = 0; i < tamano; i++) {
        scanf("%d", &V[i]);
    }
    // objectivo referencia al número 
    //al que se desea llegar mediante la suma de dos elementos del vector
    int objetivo;
    printf("Ingrese el número objetivo: ");
    scanf("%d", &objetivo);

    // Llamamos a la función SUMA para buscar las combinaciones en el vector V
    SUMA(V, tamano, objetivo);

    return 0;
}