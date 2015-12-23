#ifndef REMOVING_WORDS_CLASS_H
#define REMOVING_WORDS_CLASS_H
#include <string>

using namespace std;

class removing_words_class
{
public:
    removing_words_class();
    removing_words_class(string);
    ~removing_words_class();
    string removing_words();
    void set_str(string);
    string get_str();
private:
    string str;
};

#endif // REMOVING_WORDS_CLASS_H
