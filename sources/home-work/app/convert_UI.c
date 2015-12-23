#include <stdio.h>
#include "convert.h"

void convert_UI(){
    puts("Введите количество футов.");
    struct measure_units st1;
    scanf("%d", &st1.ft);
    convert(&st1);
    printf("Колличество миль: %d, колличество ярдов: %d колличество футов: %d \n", st1.m, st1.yd, st1.ft);
}
