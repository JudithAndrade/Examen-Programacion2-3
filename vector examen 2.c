#include <stdio.h>

void SumaFinder(int arr[], int n, int target) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("[%d] y [%d]\n", i, j);
            }
        }
    }
}

int main() {
    int V[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 33, 54, 7}; // igual se pude agremas o poner otro numero 
    int n = sizeof(V) / sizeof(V[0]);
    int target = 8; // se puede cambiar el numeros sal diferete resepuestas 

    printf("Combinaciones con suma igual a %d:\n", target);
    SumaFinder(V, n, target);

    return 0;
}