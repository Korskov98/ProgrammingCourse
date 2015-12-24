#include "convert_class.h"

int imperial_system::get_ft() const{
    return ft;
}

int imperial_system::get_m() const{
    return m;
}

int imperial_system::get_yd() const{
    return yd;
}

void imperial_system::set_ft(const int arg_ft){
    ft = arg_ft;
    while (ft >= 3){
        set_yd(yd + 1);
    }
}

void imperial_system::set_m(const int arg_m){
    m = arg_m;
}

void imperial_system::set_yd(const int arg_yd){
    yd = arg_yd;
    while (yd >= 2000){
        set_m(m + 1);
    }
}

void imperial_system::ft_in_m(){
    m = ft / 6000;
    ft = ft - m * 6000;
}

void imperial_system::yd_in_ft(){
    yd = ft / 3;
    ft = ft - yd * 3;
}
