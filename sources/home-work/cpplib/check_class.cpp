#include "check_class.h"

types_of_triangles triangles::check_triangles() const
{
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

int triangles::get_a() const
{
    return a;
}

int triangles::get_b() const
{
    return b;
}

int triangles::get_c() const
{
    return c;
}

