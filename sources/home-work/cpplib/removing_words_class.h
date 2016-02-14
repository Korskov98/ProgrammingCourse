#ifndef REMOVING_WORDS_CLASS_H
#define REMOVING_WORDS_CLASS_H
#include <string>

using namespace std;

/**
  @brief Удаление повторяющихся слов

  На вход программе подаётся строка. Она проверяется и если есть повторяющиеся слова, то они удаляются.
  */

class removing_words
{
public:
    /**
     * @brief Удаление слов
     * @return строка после удаления повторных слов
     */
    static string removing_repeating_words(string);
};

#endif // REMOVING_WORDS_CLASS_H
