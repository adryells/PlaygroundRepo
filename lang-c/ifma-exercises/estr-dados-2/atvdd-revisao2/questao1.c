#include <stdio.h>

int main(void) {
  // Escreva uma função que calcule e retorne a distância entre dois pontos (x1, y1) e x2, y2). Todos os numeros e valores de retorno devem ser do tipo float.
  // dAB² = (xB – xA)² + (yB – yA)²
  float xA, xB, yA, yB, pA, pB, distancia;
  
  printf("Insira onde está posicionado xA: ");
  scanf("%f", &xA);
  
  printf("Insira onde está posicionado xB: ");
  scanf("%f", &xB);
  
  printf("Insira onde está posicionado yA: ");
  scanf("%f", &yA);
  
  printf("Insira onde está posicionado yB: ");
  scanf("%f", &yB);
  
  pA = (xB - xA) * (xB - xA);
  pB = (yB - yA) * (yB - yA);
  
  distancia = pA + pB;
  
  printf("a distância entre o ponto A e o ponto B é %.2f", distancia);
  
  return 0;
}
