#include "vector.h"
#include <iostream>
#include <math.h>

using namespace std;

vector::vector()
{

}

vector::~vector(){

}

void vector::addition(vector sum){
    x += sum.x;
    y += sum.y;
}

void vector::subtraction(vector sub){
    x -= sub.x;
    y -= sub.y;
}

void vector::copy(vector arg){
    x = arg.x;
    y = arg.y;
}

int vector::scalar_product(vector arg1) const{
    return arg1.x * x + arg1.y * y;
}

void vector::multiply(int z){
    x *= z;
    y *= z;
}

double vector::module() const{
    return sqrt(x * x + y * y);
}
