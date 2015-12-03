
/// Над этим я еще подумаю, но пока как-то сложновато выглядит
int square(int** two_dim, int n){
    int i,j,flag,l;
    for (i = 0; i < n; i++){
        for (j = 1; j < n+1; j++){
            flag = 0;
            for (l = 0; l < n; l++){
                if (two_dim[i][l] == j){
                    flag = 1;
                }
            }
            if (flag == 0){
                return flag;
            }
        }
    }
    for (i = 0; i < n; i++){
        for (j = 1; j < n+1; j++){
            flag = 0;
            for (l = 0; l < n; l++){
                if (two_dim[l][i] == j){
                    flag = 1;
                }
            }
            if (flag == 0){
                return flag;
            }
        }
    }
    return 1;
}

