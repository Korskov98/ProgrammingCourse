#include <stdio.h>
#include "check.h"

void check_UI(){
    puts("Введите три стороны треугольника.");
    int a,b,c,result_check;
    scanf("%d%d%d", &a, &b, &c);
    result_check = check(a,b,c);
    switch(result_check){
        case incorrectly:
            printf("Данные некорректны.\n");
        break;
        case possible:
            printf("Данный треугольник возможен.\n");
        break;
        case isosceles:
            printf("Данный треугольник является равнобедренным.\n");
        break;
        case equilateral:
            printf("Данный треугольник является равносторонним.\n");
        break;
        case impossible:
            printf("Данный треугольник не возможен.\n");
    }
}
