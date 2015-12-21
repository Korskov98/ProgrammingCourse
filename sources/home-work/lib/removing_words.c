#include "removing_words.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void removing_words(char string[]){
    FILE * oFile;
    oFile = fopen("output_removing_words", "w");
    int n,i = 0,j,l,k,flag;
    n = strlen(string);
    i = 0;
    char word[100];
    while(i <= n){
        l=0;
        while ((string[i] != ' ') && (i < n)){
            word[l] = string[i];
            i++;
            l++;
        }
        word[l]='\0';
        j = i + 1;
        k = 0;
        flag = 1;
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
