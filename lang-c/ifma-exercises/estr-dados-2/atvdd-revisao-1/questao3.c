#include <stdio.h>
int main()
{
    // Fazer um programa em "C" que solicite 2 números e informe: a) A soma dos números; b) O produto do primeiro número pelo quadrado do segundo; c) O quadrado do primeiro número;
    float n1, n2;
    printf("Escreva o primeiro numero: ");
    scanf("%f", &n1);

    printf("Escreva o segundo numero: ");
    scanf("%f", &n2);

    if(n1 == n2){
      printf("Valores iguais.");
      }
    else if (n1 > n2){
      printf("N1 é maior N2");
      }
    else(n1 < n2){
      printf("N2 é maior N1");
    }

   return 0;
}
