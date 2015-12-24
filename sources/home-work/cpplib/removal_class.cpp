#include "removal_class.h"

int removal::removal_odd(int number){
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
