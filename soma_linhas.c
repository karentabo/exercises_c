#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);

    double mat[m][n];
    double vet[m];

    for (int i = 0; i < m; i++) {
        printf("\nDigite os elementos da %da linha:\n", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }

    printf("\nSOMA DOS VETORES GERADOS POR LINHA:\n");
    for (int i = 0; i < m; i++) {
        vet[i] = 0;
        for (int j = 0; j < n; j++) {
            vet[i] += mat[i][j];
        }
        printf("Soma da linha %d: %.1lf\n", i + 1, vet[i]);
    }

    return 0;
}
