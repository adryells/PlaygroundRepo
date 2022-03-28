#include <stdio.h>
// https://replit.com/@adryellpaulo/question10c#main.c
// Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.

int main(void) {
  int valores[5];
  for (int i = 0; i < 5; i++){
    printf("%iº valor: ", i+1);
    scanf("%i", &valores[i]);
    printf("\nO dobro: %i\n", valores[i] * 2);
  }
  return 0;
}
