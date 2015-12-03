#include <stdio.h>
#include <stdlib.h>

void removing_words_UI(){
    int n;
    FILE * iFile;
    iFile = fopen("input_removing_words", "r");
    fscanf(iFile, "%d", &n);
    char c,string[n];
    int i = 0;
    fscanf(iFile, "%c", &c);
    while(c!='.')
        {
            string[i]=c;
            i++;
            fscanf(iFile, "%c", &c);
        }
    string[i]='\0';
    fclose(iFile);
removing_words(string);
}

