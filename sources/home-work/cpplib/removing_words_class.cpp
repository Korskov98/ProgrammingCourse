#include "removing_words_class.h"
#include <string>

using namespace std;

removing_words_class::removing_words_class()
{
    str = ' ';
}

removing_words_class::removing_words_class(string arg_str)
{
    str = arg_str;
}

removing_words_class::~removing_words_class()
{

}

string removing_words_class::removing_words()
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

void removing_words_class::set_str(string arg_str)
{
    str = arg_str;
}

string removing_words_class::get_str()
{
    return str;
}

