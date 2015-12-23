#include "convert_class.h"

convert_class::convert_class()
{
    ft = 0;
    yd = 0;
    m = 0;
}

convert_class::convert_class(int arg_ft){
    ft = arg_ft;
    yd = 0;
    m = 0;
}

convert_class::~convert_class(){

}

int convert_class::get_ft(){
    return ft;
}

int convert_class::get_m(){
    return m;
}

int convert_class::get_yd(){
    return yd;
}

void convert_class::set_ft(int arg_ft){
    ft = arg_ft;
}

void convert_class::set_m(int arg_m){
    m = arg_m;
}

void convert_class::set_yd(int arg_yd){
    yd = arg_yd;
}

void convert_class::ft_in_m(){
    m = ft / 6000;
    ft = ft - m * 6000;
}

void convert_class::yd_in_ft(){
    yd = ft / 3;
    ft = ft - yd * 3;
}
