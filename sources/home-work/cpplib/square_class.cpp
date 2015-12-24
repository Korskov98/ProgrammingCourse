#include "square_class.h"
#include <exception>

using namespace std;

int latin_square::get_n() const
{
    return n;
}

bool latin_square::check_latin_square() const
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

void latin_square::set_member_two_dim(const int arg_i, const int arg_j, const int arg)
{
    if (arg_i > n - 1 || arg_j > n - 1){
        throw WrongAdressException(arg_i, arg_j);
    }
    two_dim[arg_i][arg_j] = arg;
}
