#include <stdio.h>
#include "removal.h"

void removal_UI(){
    puts("Введите число.");
    int number,result_removal;
    scanf("%d", &number);
    result_removal = removal(number);
    printf("Результат: %d \n", result_removal);
}
