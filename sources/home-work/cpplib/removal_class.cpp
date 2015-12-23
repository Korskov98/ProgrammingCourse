#include "removal_class.h"

removal_class::removal_class()
{
    number = 0;
}

removal_class::removal_class(int arg_number){
    number = arg_number;
}

int removal_class::get_number(){
    return number;
}

removal_class::~removal_class(){


}

void removal_class::set_number(int arg_number){
    number = arg_number;
}

int removal_class::removal(){
    int numeral, result = 0, digit = 1;
    while(number > 0){
        numeral = number % 10;
        number = number / 10;
        if (numeral % 2 == 0){
            result = result + digit * numeral;
            digit = digit * 10;
        }
    }
    return result;
}
