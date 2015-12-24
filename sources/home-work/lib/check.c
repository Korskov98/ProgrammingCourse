#include <stdio.h>
#include "check.h"

int check(int a, int b, int c){
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
