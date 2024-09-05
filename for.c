#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("A soma dos numeros 1 %d ate: %d\n", n, soma);
    
    return 0;
}