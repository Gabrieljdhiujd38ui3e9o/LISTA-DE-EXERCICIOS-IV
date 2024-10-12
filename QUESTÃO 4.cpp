#include <stdio.h>       4

void selectionSortDescending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int max_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        int temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    int notas[n];
    for (int i = 0; i < n; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    selectionSortDescending(notas, n);

    printf("Notas ordenadas em ordem decrescente: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", notas[i]);
    }
    printf("\n");

    return 0;
}