#include <stdio.h>
int main()
{
    // Fazer um programa em "C" que solicite 2 números e informe: a) A soma dos números; b) O produto do primeiro número pelo quadrado do segundo; c) O quadrado do primeiro número;
    float n1, n2;
    printf("Escreva o primeiro numero: ");
    scanf("%f", &n1);

    printf("Escreva o segundo numero: ");
    scanf("%f", &n2);

    printf("A soma dos numeros: %.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
    printf("O produto do primeiro numero pelo quadrado do segundo: %.2f * %.2f = %.2f\n", n1, n2 * n2, n1 * (n2 * n2));

   return 0;
}
