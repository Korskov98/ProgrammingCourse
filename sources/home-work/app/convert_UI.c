#include <stdio.h>
#include "convert.h"

void convert_UI(){
    puts("Введите количество футов.");
    int ft,yd,m;
    scanf("%d", &ft);
    convert(&ft, &yd, &m);
    printf("Колличество миль: %d, колличество ярдов: %d колличество футов: %d \n", m, yd, ft);
}
