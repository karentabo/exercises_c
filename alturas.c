#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int n;
    double somaAlt = 0, cont = 0;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);
    limpar_entrada();

    char nome[n][50];
    int idade[n];
    double altura[n];

    for (int i = 0; i < n; i++) {
        printf("Digite os dados da %da pessoa\n", i+1);
        printf("Nome: ");
        ler_texto(nome[i], 50);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
        limpar_entrada();
    }
    
    for (int i = 0; i < n; i ++) {
        somaAlt += altura[i];
    }

    for (int i = 0; i < n; i ++) {
        if (idade[i] < 16) {
            cont += 1;
        }
    }

    printf("\nAltura media das pessoas %.2lf\n", somaAlt / n);
    printf("A porcentagem de pessoas com menos de 16 anos e de %.2lf%\n", (cont / n) * 100);


    return 0;
}
