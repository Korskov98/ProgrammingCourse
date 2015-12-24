#include <stdio.h>
#include <stdlib.h>
#include "removing_words.h"

void removing_words_UI(){
    FILE * iFile;
    iFile = fopen("input_removing_words", "r");
    char string[100],result[100] = "";
    fgets(string, 100, iFile);
    fclose(iFile);
    removing_words(string,result);
    FILE * oFile;
    oFile = fopen("output_removing_words", "w");
    fputs(result,oFile);
    fclose(oFile);
}
