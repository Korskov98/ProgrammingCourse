#include "square_class.h"

square_class::square_class(int arg_n)
{
    n = arg_n;
    two_dim = new int*[n];
    int i;
    for (i = 0; i < n; i++){
        two_dim[i] = new int[n];
    }
}

square_class::~square_class()
{
    int i;
    for (i = 0; i < n; i++){
        delete []two_dim[i];
    }
    delete []two_dim;
}

int **square_class::get_two_dim()
{
    return two_dim;
}

int square_class::get_n()
{
    return n;
}

void square_class::set_n(int arg_n)
{
    n = arg_n;
}

void square_class::set_two_dim(int ** arg_two_dim)
{
    two_dim = arg_two_dim;
}

int square_class::check_latin_square()
{
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

void square_class::set_member_two_dim(int arg_i, int arg_j, int arg)
{
    two_dim[arg_i][arg_j] = arg;
}


