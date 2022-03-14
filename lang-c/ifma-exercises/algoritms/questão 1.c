#include <stdio.h>
main(){
    int sexo;
    char nome[32];
    printf("seu sexo:\n[1] - feminino\n[2] - masculino\n");
    scanf("%d", &sexo);

    printf("seu nome:\n");
    scanf("%s", &nome);


    if(sexo == 1){
        printf("bem vinda, %s", &nome);
    }
    else if(sexo == 2){
        printf("bem vindo, %s", &nome);
    };
    return 0;
}
