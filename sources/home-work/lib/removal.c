#include<stdio.h>
#include"removal.h"

int removal(int number){
    int result = 0, digit = 1;
    while(number > 0){
        int numeral = number % 10;
        number = number / 10;
        if (numeral % 2 == 0){
            result = result + digit * numeral;
            digit = digit * 10;
        }
    }
    return result;
}

