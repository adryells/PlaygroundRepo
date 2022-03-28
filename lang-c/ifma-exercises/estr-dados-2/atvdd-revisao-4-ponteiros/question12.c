#include <stdio.h>
// https://replit.com/@adryellpaulo/question12c#main.c
//Faca um programa que leia tres valores inteiros e chame uma funcao que receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel, o segundo menor valor na variavel do meio, e o maior valor na  ́ ultima variavel. A funcao deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela.
int ordena(int valores[3]){
  int v1, v2, v3 = valores[0];
  
  for(int i = 0; i < 3; i++){
    if(valores[i] > v1){
      v1 = valores[i];
    }

    if(i == 2){
      for (int i = 0; i < 3; i++){
        if (valores[i] < v3){
          v3 = valores[i];
        }
      }
    }
  }

  for(int i = 0; i < 3; i++){
    if (v1 != valores[i] && v3 != valores[i]){
      v2 = valores[i];
    }
  }
  
  int v = {v1, v2, v3};

  return v;
}

int main(void) {
  int valores[3];
  for(int i = 0; i <3; i ++){
    printf("%iº valor: ", i+1);
    scanf("%i", &valores[i]);
  }

  int valores_ordenados[3] = ordena(valores);
  
  for(int i = 0; i < 3; i++){
    printf("%i\n", valores_ordenados[i]);
  }

  return 0;
  
  
}
