#ifndef SQUARE_CLASS_H
#define SQUARE_CLASS_H

#include <exception>
#include <vector>

using namespace std;

class WrongAdressException : public exception
{
private:
    int i;
    int j;
public:
    WrongAdressException(int i, int j) : i(i), j(j){}
    int get_i() const
    {
        return i;
    }
    int get_j() const
    {
        return j;
    }
};

class square_class
{
public:
    square_class(int arg_n = 0) : n(arg_n){
        n = arg_n;
        two_dim.resize(n);
        for (int i = 0; i < n; ++i){
            two_dim[i].resize(n);
        }
    }
    int get_n() const;
    bool check_latin_square();
    void set_member_two_dim(int, int, int);
private:
    int n;
    vector<vector<int> > two_dim;
};

#endif // SQUARE_CLASS_H
