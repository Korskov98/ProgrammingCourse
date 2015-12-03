#include <stdio.h>
#include <stdlib.h>
#include "square.h"

void square_UI(){
    int n,result_square;
    FILE * iFile;
    iFile = fopen("input", "r");
    fscanf(iFile, "%d", &n);
    int** two_dim;
    two_dim = (int **) malloc(sizeof(int*) * n);
    int i,j;
    for (i = 0; i < n; i++){
        two_dim[i] = (int *) malloc(sizeof(int) * n);
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            fscanf(iFile, "%d", &two_dim[i][j]);
        }
    }
    fclose(iFile);
    result_square = square(two_dim,n);
    for (i = 0; i < n; i++){
        free(two_dim[i]);
    }
    free(two_dim);
    FILE * oFile;
    oFile = fopen("output", "w");
    if (result_square == 1){
        fprintf(oFile, "Матрица является латинским квадратом.");
    }
    else{
        fprintf(oFile, "Матрица не является латинским квадратом.");
    }
    fclose(oFile);
}
