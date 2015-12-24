#include "vectors.h"
#include <iostream>
#include <math.h>

using namespace std;

void my_vector::operator +=(const my_vector arg_sum)
{
    x += arg_sum.x;
    y += arg_sum.y;
}

void my_vector::operator -=(const my_vector arg_sub)
{
    x -= arg_sub.x;
    y -= arg_sub.y;
}

int my_vector::scalar_product(const my_vector arg1) const{
    return arg1.x * x + arg1.y * y;
}

void my_vector::operator *=(const int arg_z)
{
    x *= arg_z;
    y *= arg_z;
}

double my_vector::module() const{
    return sqrt(x * x + y * y);
}

int my_vector::get_x() const{
    return x;
}
int my_vector::get_y() const{
    return y;
}
void my_vector::set_x(int xx){
    x = xx;
}
void my_vector::set_y(int yy){
    y = yy;
}
void my_vector::just_exception() const{
    throw TestException();
}
