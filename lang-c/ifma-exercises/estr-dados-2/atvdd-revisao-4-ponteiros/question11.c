#include <stdio.h>
// https://replit.com/@adryellpaulo/question11c#main.c
// Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima o endereco das posicoes contendo valores pares.

int main(void) {
  int valores[5];
  for(int i = 0; i < 5; i++){
    printf("%iº valor: ", i + 1);
    scanf("%i", &valores[i]);
  }

  for (int j = 0; j < 5; j++){
    if(valores[j] % 2 == 0){
      printf("%i", &valores[j]);
    }
  }
  return 0;
}
