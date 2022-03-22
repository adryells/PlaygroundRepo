#include <stdio.h>
#include <stdbool.h>

bool isPositive(int num){
  if (num > 0){
    printf("É positivo.");
    return true;
  }
  return false;
}

int somaDivisores(int num){
   int soma = 0;
  
   for(int j = num; num > 1; num--){
        if(num % 2 == 0){
          soma += j;
        }
    }
  
    return soma;
}

int main(void) {
  for (int i = 1; i < 8; i++){
    if (isPositive(i)){
      int soma = somaDivisores(i);
      printf("A soma dos divisores de %i é %i\n", i, soma);
    }
  }
  
  return 0;
}
