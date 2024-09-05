#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Menor de idade.\n");
    } else if (idade < 60) {
        printf("adulto.\n");
    } else {
        printf("idoso.\n");
    }

    return 0;
}