#include <stdio.h>
#include"convert.h"

/// Давайте в качестве усложнения задания заведем еще структуру для миль, ярдов, футов
/// то есть будет
/// us_measurment_system convert(foot){
/// ...
/// }
void convert(int* ft, int* yd, int* m){
    *m = *ft / 6000;
    *ft = *ft - *m * 6000;
    *yd = *ft / 3;
    *ft = *ft - *yd * 3;
}

