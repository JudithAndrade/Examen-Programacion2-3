#include <stdio.h>

void SumaFinder(int vector[], int size, int target) {
    int found = 0; // Variable para determinar si se encontraron combinaciones válidas

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (vector[i] + vector[j] == target) {
                printf("suma es %d: [%d] y  [%d] \n", target, i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No se encontraron dos componentes cuya suma sea igual al número objetivo.\n");
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

    SumaFinder(V, size, N);

    return 0;
}