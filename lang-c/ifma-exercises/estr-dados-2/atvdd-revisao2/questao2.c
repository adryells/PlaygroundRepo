#include <stdio.h>
float eleva(float base, float potencia){
  
  float resultado = base;
  
  for (int i = 1; i < potencia; i++){
    resultado = resultado * base;
  }

  return resultado;
}

int main(void) {

  float base, potencia;
  
  printf("Informe a base: ");
  scanf("%f", &base);

  printf("Informe a potencia: ");
  scanf("%f", &potencia);
  
  float resultado = eleva(base, potencia);
  
  printf("o resultado de %.1f^%.1f é %.2f", base, potencia, resultado);
  
  return 0;
}
