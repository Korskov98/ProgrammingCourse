#include "removing_words.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/// пусть лучше вернет что она собирается выводить, а не выводит
void removing_words(char string[]){
    FILE * oFile;
    oFile = fopen("output_removing_words", "w");
    int n,i = 0;
    n = strlen(string);
    char word[100];
    while(i <= n){
        int l=0;
        while ((i < n) && (string[i] != ' ')){
            word[l] = string[i];
            i++;
            l++;
        }
        word[l]='\0';
        int j = i + 1;
        int k = 0;
        int flag = 1;
        for (j=i+1;j <= i + l; j++){
            if (word[k] != string[j]){
                flag = 0;
            }
            k++;
        }
        if (flag == 0){
            fprintf(oFile, "%s ", word);
        }
        i++;
    }
    fclose(oFile);
}
