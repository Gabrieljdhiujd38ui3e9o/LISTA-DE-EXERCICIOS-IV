#include <stdio.h>               Questao 2

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    printf("Números pares entre 1 e %d:\n", numero);
    for (int i = 1; i <= numero; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

