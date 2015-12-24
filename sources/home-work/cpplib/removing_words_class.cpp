#include "removing_words_class.h"
#include <string>

using namespace std;


string removing_words::removing_repeating_words(string str)
{
    int found = 0,found_end = 0;
    string word, sub_str,result;
    sub_str = str;
    while(found_end >= 0){
        word = sub_str.substr(0, sub_str.find(' '));
        sub_str.erase(0, sub_str.find(' ') + 1);
        found = sub_str.find(word);
        if (found != 0){
            result = result + word + ' ';
        }
        found_end = sub_str.find(' ');
    }
    result += sub_str;
    return result;
}
