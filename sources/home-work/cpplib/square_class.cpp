#include "square_class.h"
#include <exception>

using namespace std;

square_class::square_class(int arg_n)
{
    n = arg_n;
    two_dim.resize(n);
    for (int i = 0; i < n; ++i){
        two_dim[i].resize(n);
    }
}

int square_class::get_n() const
{
    return n;
}

bool square_class::check_latin_square()
{
        int i,j,l;
        bool flag;
        for (i = 0; i < n; i++){
            for (j = 1; j < n+1; j++){
                flag = false;
                for (l = 0; l < n; l++){
                    if (two_dim[i][l] == j){
                        flag = true;
                    }
                }
                if (flag == false){
                    return flag;
                }
            }
        }
        for (i = 0; i < n; i++){
            for (j = 1; j < n+1; j++){
                flag = false;
                for (l = 0; l < n; l++){
                    if (two_dim[l][i] == j){
                        flag = true;
                    }
                }
                if (flag == false){
                    return flag;
                }
            }
        }
        return flag;
}

void square_class::set_member_two_dim(int arg_i, int arg_j, int arg)
{
    if (arg_i > n || arg_j > n){
        throw WrongAdressException(arg_i, arg_j);
    }
    two_dim[arg_i][arg_j] = arg;
}
