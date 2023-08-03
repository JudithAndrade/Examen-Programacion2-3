#include <stdio.h>

void SumaFinder(int vector[], int size, int target) { // Función para encontrar las combinaciones de posiciones que suman al número objetivo
    int found = 0; // Variable para determinar si se encontraron combinaciones válidas

    for (int i = 0; i < size; i++) {
         // Comprobamos si la suma de los elementos de las posiciones i y j es igual al número objetivo
        for (int j = i + 1; j < size; j++) {
            if (vector[i] + vector[j] == target) {
                // Si se encontró una combinación, mostramos el mensaje con el número objetivo y las posiciones
                printf("suma es %d: [%d] y  [%d] \n", target, i, j);
                found = 1; // Marcamos que se encontró al menos una combinación válida
            }
        }
    }
   
    // Si no se encontraron combinaciones válidas, mostramos un mensaje
    if (!found) {
        printf("No se suma sea igual al numero objetivo.\n");
    }
}

int main() {
    int size;
    printf("Ingrese el tamano del vector: ");
    scanf("%d", &size);

    int V[size];
    printf("Ingrese los elementos del vector:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &V[i]);
    }

    int N;
    printf("Ingrese el numero objetivo N: ");
    scanf("%d", &N);
   
   // Llamamos a la función SumaFinder para buscar las combinaciones en el vector V
    SumaFinder(V, size, N);

    return 0;
}