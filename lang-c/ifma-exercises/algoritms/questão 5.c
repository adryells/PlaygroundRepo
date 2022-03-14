#include <stdio.h>

main(){
    char A[5][1], nome[32];

    for(int i = 0; i<5; i++){
        printf("nome: ");
        scanf("%s", &nome);

        A[i][1] = nome;
    };

    for(int i = 0; i<5; i++){
        printf("%s", A[i][1]);
    };

};
