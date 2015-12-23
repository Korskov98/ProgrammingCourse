#include "check_class.h"

check_class::check_class()
{
    a = 0;
    b = 0;
    c = 0;
}

check_class::check_class(int arg_a, int arg_b, int arg_c)
{
    a = arg_a;
    b = arg_b;
    c = arg_c;
}

check_class::~check_class()
{

}

int check_class::check_triangles()
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

int check_class::get_a()
{
    return a;
}

int check_class::get_b()
{
    return b;
}

int check_class::get_c()
{
    return c;
}

