#include <stdio.h>
#include"convert.h"

void convert(struct measure_units *arg){
    arg->m = arg->ft / 6000;
    arg->ft = arg->ft - arg->m * 6000;
    arg->yd = arg->ft / 3;
    arg->ft = arg->ft - arg->yd * 3;
}

