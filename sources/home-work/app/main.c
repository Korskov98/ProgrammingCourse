#include <stdio.h>
#include "convert_UI.h"
#include "check_UI.h"
#include "removal_UI.h"
#include "square_UI.h"
#include "removing_words_UI.h"

int main(void)
{
    puts("1. Перевод футов в мили, ярды и футы.");
    puts("2. Проверка допустимости треугольника.");
    puts("3. Удаление из числа нечётных чисел.");
    puts("4. Проверить является ли двумерный массив латинским квадратом.");
    puts("5. Удаление повторяющихся слов.");
    int choice;
    scanf("%d", &choice);
    switch(choice){
        case 1:
            convert_UI();
        break;
        case 2:
            check_UI();
        break;
        case 3:
            removal_UI();
        break;
        case 4:
            square_UI();
        case 5:
            removing_words_UI();
    }
    return 0;
}

