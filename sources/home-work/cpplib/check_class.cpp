#include "check_class.h"

int check_class::check_triangles() const
{
    enum types_of_triangles {incorrectly, possible, isosceles, equilateral, impossible};
    if (a <= 0 || b <= 0 || c <= 0)
        return incorrectly;
    else{
        if (a + b > c && b + c > a && a + c > b){
            if (a == b && b == c){
                return equilateral;
            }
            if ((a == b) || (a == c) || (b == c)){
                return isosceles;
            }
            return possible;
        }
        else{
            return impossible;
        }
    }
}

void check_class::set_a(int arg_a)
{
    a = arg_a;
}

void check_class::set_b(int arg_b)
{
    b = arg_b;
}

void check_class::set_c(int arg_c)
{
    c = arg_c;
}

int check_class::get_a() const
{
    return a;
}

int check_class::get_b() const
{
    return b;
}

int check_class::get_c() const
{
    return c;
}

