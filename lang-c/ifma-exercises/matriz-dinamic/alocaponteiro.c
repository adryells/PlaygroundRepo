#include <stdio.h>
#include <stdlib.h>


int **criaMatriz(int **p, int n, int m){
    p = malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++){
        p[i] = malloc(m * sizeof(int));
    };

    return **p;
}

int main(){
    int **p;
    int n = 4;
    int m = 5;
    int **matriz = criaMatriz(p, n, m);
    for (int i = 0; i<n; i++){
        for (int j=0; j<m; j++){
            matriz[i][j] = 0;
        };
    };

    for (int i=0; i<3; i++ ){
      for ( int j=0; j<3; j++ )
      {
         printf ("%i", matriz[ i ][ j ]);
      }
    };
}
