#include <stdio.h>
#include "removal.h"

void removal_UI(){
    puts("Введите число.");
    long number,result_removal;
    scanf("%ld", &number);
    result_removal = removal(number);
    printf("Результат: %ld \n", result_removal);
}
