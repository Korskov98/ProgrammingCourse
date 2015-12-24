#include "removing_words.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void removing_words(char string[], char *result){
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
            strcat(result, word);
        }
        i++;
    }
}
