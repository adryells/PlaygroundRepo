#include <stdio.h>

#include <stdlib.h>


int main() {

   int qtdd;

   float *ptr, soma;


   printf("quantos alunos: ");
   scanf("%d", &qtdd);

   ptr = (float *) malloc(sizeof(float) * qtdd+1);


   for(int i=0; i<qtdd; i++){

       printf("nota do aluno [%d]: ", i+1);
       scanf("%f", &ptr[i]);
   }

   soma = 0;

   for(int i=0; i<qtdd; i++){

       soma = soma + ptr[i];

   }

   free(ptr);

   printf("A média da turma foi %.2f", soma / qtdd);
   return 0;

}
