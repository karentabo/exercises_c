#include <stdlib.h>

int main()
{
    int n, cont = 0;

    printf("Qual a ordem da matriz?");
    scanf("%d", &n);

    int mat[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; i++){
            printf("Elemento [%d, %d]", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nDIAGONAL PRINCIPAL:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mat[i][i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; i++){
            if (mat[i][j] < 0) {
                cont ++;
            }
        }
    }

    printf("\nQuantidade de negativos: %d\n", cont);

    return 0;
}

