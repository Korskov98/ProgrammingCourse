#include "vectors.h"
#include <iostream>
#include <math.h>

using namespace std;

vector::vector()
{
    x = 0;
    y = 0;
}

vector::vector(int arg_x, int arg_y){
    x = arg_x;
    y = arg_y;
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

int vector::scalar_product(vector arg1){
    return arg1.x * x + arg1.y * y;
}

void vector::multiply(int z){
    x *= z;
    y *= z;
}

double vector::module(){
    return sqrt(x * x + y * y);
}

int vector::get_x(){
    return x;
}
int vector::get_y(){
    return y;
}
void vector::set_x(int xx){
    x = xx;
}
void vector::set_y(int yy){
    y = yy;
}
