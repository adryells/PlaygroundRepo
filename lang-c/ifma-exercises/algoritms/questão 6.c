#include <stdio.h>

typedef struct
    {
        char nome[32];
        int matricula;
        char curso[64];
    } Aluno;


main(){
    char nome[32], curso[64];
    int matricula;

    Aluno Alunos[5];

    for(int i = 1; i < 5; i++){
        printf("nome: ");
        scanf("%s", &nome);

        printf("matricula: ");
        scanf("%d", &matricula);

        printf("curso: ");
        scanf("%s", &curso);

        Aluno a = {nome,matricula,curso};

        Alunos[i] = a;

    };

    for(int i = 0; i<5; i++){
        printf("Nome: %s\n Matricula: %i\n Curso: %s\n", Alunos[i].nome, Alunos[i].matricula, Alunos[i].curso);
    };
};
