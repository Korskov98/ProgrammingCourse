#include "convert_class.h"

int convert_class::get_ft() const{
    return ft;
}

int convert_class::get_m() const{
    return m;
}

int convert_class::get_yd() const{
    return yd;
}

void convert_class::set_ft(int arg_ft){
    ft = arg_ft;
    while (ft >= 3){
        set_yd(yd + 1);
    }
}

void convert_class::set_m(int arg_m){
    m = arg_m;
}

void convert_class::set_yd(int arg_yd){
    yd = arg_yd;
    while (yd >= 2000){
        set_m(m + 1);
    }
}

void convert_class::ft_in_m(){
    m = ft / 6000;
    ft = ft - m * 6000;
}

void convert_class::yd_in_ft(){
    yd = ft / 3;
    ft = ft - yd * 3;
}
