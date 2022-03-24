#include <stdio.h>
#include <string.h>

struct Aluno{
  char nome[81];
  char matricula[8];
  char turma;
  float p1, p2, p3;
};
typedef struct Aluno aluno;

void imprime_aprovados(int num_alunos, aluno** alunos){
  for(int i = 0; i < num_alunos; i++){
    if((alunos[i]->p1 + alunos[i]->p2 + alunos[i]->p3))/3){
      printf("%s", alunos[i]->nome);
      printf("%s", alunos[i]->matricula);
      printf("%c", alunos[i]->turma);
      printf("%f", (alunos[i]->p1 + alunos[i]->p2 + alunos[i]->p3)/3;
    };
  }
};

int main(void) {
  int num_alunos;
  aluno *alunos[num_alunos];

  printf("Insira a qtdd de alunos na turma: ");
  scanf("%i", &num_alunos);

  for(int i = 0; i < num_alunos; i++){
    
    char nome, matricula, turma;
    float n1, n2, n3;

    printf("%iº aluno\n", i+1);

    printf("Nome do aluno: \n");
    scanf("%s", &nome);

    printf("Matricula do aluno: \n");
    scanf("%s", &matricula);

    printf("Turma do aluno: \n");
    scanf("%c", &turma);

    printf("1º nota do aluno: \n");
    scanf("%f", &n1);

    printf("2º nota do aluno: \n");
    scanf("%f", &n2);

    printf("3º nota do aluno: \n");
    scanf("%f", &n3);

    strcpy(alunos[i]->nome, &nome);
    strcpy(alunos[i]->matricula, &matricula);
    alunos[i]->turma = turma;
    alunos[i]->p1 = n1;
    alunos[i]->p2 = n2;
    alunos[i]->p3 = n3;
  }
  
  imprime_aprovados(num_alunos, alunos);
  return 0;
}
