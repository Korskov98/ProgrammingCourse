#include "vectors.h"
#include <iostream>
#include <math.h>

using namespace std;

vectors::vectors()
{
    x = 0;
    y = 0;
}

vectors::vectors(int arg_x, int arg_y){
    x = arg_x;
    y = arg_y;
}

vectors::~vectors(){

}

void vectors::addition(vectors sum){
    x += sum.x;
    y += sum.y;
}

void vectors::subtraction(vectors sub){
    x -= sub.x;
    y -= sub.y;
}

void vectors::copy(vectors arg){
    x = arg.x;
    y = arg.y;
}

int vectors::scalar_product(vectors arg1){
    return arg1.x * x + arg1.y * y;
}

void vectors::multiply(int z){
    x *= z;
    y *= z;
}

double vectors::module(){
    return sqrt(x * x + y * y);
}

int vectors::get_x(){
    return x;
}
int vectors::get_y(){
    return y;
}
void vectors::set_x(int xx){
    x = xx;
}
void vectors::set_y(int yy){
    y = yy;
}
