#include <stdio.h>        QUESTAO 3

void insertionSort(float arr[], int n) {
    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    printf("Quantos preços? ");
    scanf("%d", &n);

    float precos[n];
    for (int i = 0; i < n; i++) {
        scanf("%f", &precos[i]);
    }

    insertionSort(precos, n);

    for (int i = 0; i < n; i++) {
        printf("%.2f\n", precos[i]);
    }

    return 0;
}