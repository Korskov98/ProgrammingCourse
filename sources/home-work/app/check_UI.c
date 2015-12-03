#include <stdio.h>
#include "check.h"

void check_UI(){
    puts("Введите три стороны треугольника.");
    int a,b,c,result_check;
    scanf("%d%d%d", &a, &b, &c);
    result_check = check(a,b,c);
    switch(result_check){
        case 0:
            printf("Данные некорректны.\n");
        break;
        case 1:
            printf("Данный треугольник возможен.\n");
        break;
        case 2:
            printf("Данный треугольник является равнобедренным.\n");
        break;
        case 3:
            printf("Данный треугольник является равносторонним.\n");
        break;
        case 4:
            printf("Данный треугольник не возможен.\n");
    }
}
