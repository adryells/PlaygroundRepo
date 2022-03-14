#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
    {
        char rua[32];
        char complemento[64];
        char bairro[32];
        char cep[12];
        char cidade[32];
        char estado[32];
        char pais[32];
        int numero;
    } Endereco;

typedef struct
    {
        int ddd;
        int numero;
    } Telefone;

typedef struct
    {
        int dia;
        int mes;
        int ano;
    } Aniversario;

typedef struct
    {
        char nome[32];
        char email[32];
        char curso[8];
        char observacao[128];
        struct Endereco endereco;
        struct Telefone telefone;
        struct Aniversario aniversario;
    } Aluno;

void insere_pessoa(Aluno agenda){
    printf("Tela de inserção de aluno\n");
    char nome[32], email[32], curso[8], observacao[128], rua[32], complememto[64], bairro[32], cep[12], cidade[32], estado[32], pais[32];
    int dia, mes, ano, ddd, numero_telefone, numero_casa;

    printf("\nPrimeiro, insira seus dados basicos: \n");
    printf("Nome: ");
    scanf("%s", &nome);

    printf("Email: ");
    scanf("%s", &email);

    printf("Curso: ");
    scanf("%s", &curso);

    printf("Observacao: ");
    scanf("%s", &observacao);

    printf("\n informe sua data de nascimento: \n");

    printf("Dia de seu aniversario: ");
    scanf("%i", &dia);

    printf("Mes de seu aniversario: ");
    scanf("%i", &mes);

    printf("Ano de seu aniversario: ");
    scanf("%i", &ano);

    printf("\n Informe seus dados de contato: \n");

    printf("Seu ddd: ");
    scanf("%i", &ddd);

    printf("Numero de telefone: ");
    scanf("%i", &numero_telefone);

    printf("\n Informe seu endereço: \n");
    printf("Rua: ");
    scanf("%s", &rua);

    printf("Bairro: ");
    scanf("%s", &bairro);

    printf("Cep: ");
    scanf("%s", &cep);

    printf("Complemento: ");
    scanf("%s", &complememto);

    printf("Nº casa: ");
    scanf("%i", &numero_casa);

    printf("Cidade: ");
    scanf("%s", &cidade);

    printf("Estado: ");
    scanf("%s", &estado);

    printf("Pais: ");
    scanf("%s", &pais);

    printf("\nPronto, dados informados com sucesso!");

    Aniversario data = {dia,mes,ano};
    Telefone telefone = {ddd, numero_telefone};
    Endereco endereco = {rua, complememto, bairro, cep, cidade, estado, pais, numero_casa};

    Aluno agenda = {nome, email, curso, observacao, endereco, telefone, data};

};

main(){
    Aluno agenda[1];
    insere_pessoa(agenda);
    printf("Nome: %s\n Matricula: %i\n Curso: %s\n", agenda[0].nome, agenda[0].email, agenda[0].curso);
};

























