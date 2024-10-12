#include <stdio.h>    5

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int buscaBinaria(int arr[], int n, int valor) {
    int inicio = 0, fim = n - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (arr[meio] == valor) {
            return meio;
        }
        if (arr[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main() {
    int n, valor;
    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    int arr[n];
    printf("Digite os elementos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    printf("Digite o valor a ser pesquisado: ");
    scanf("%d", &valor);

    int resultado = buscaBinaria(arr, n, valor);
    if (resultado != -1) {
        printf("Valor encontrado na posição: %d\n", resultado);
    } else {
        printf("Valor não encontrado.\n");
    }

    return 0;
}