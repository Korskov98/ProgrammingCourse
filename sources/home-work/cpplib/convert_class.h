#ifndef CONVERT_CLASS_H
#define CONVERT_CLASS_H

/**
  @brief Конвертация

  На вход программе подаётся колличество футов. Они переводятся в мили и ярды.
  */

class imperial_system
{
public:
    /**
     * @brief Конструктор
     * @param arg_ft количество футов
     */
    imperial_system(int arg_ft = 0) : ft(arg_ft), yd(0), m(0){
    }
    /**
     * @brief Установить значение поля ft, равное количеству футов
     */
    void set_ft(const int);
    /**
     * @brief Установить значение поля yd, равное количеству ярдов
     */
    void set_yd(const int);
    /**
     * @brief Установить значение поля m, равное количеству миль
     */
    void set_m(const int);
    /**
     * @brief Получить число футов
     * @return число футов
     */
    int get_ft() const;
    /**
     * @brief Получить число ярдов
     * @return число ярдов
     */
    int get_yd() const;
    /**
     * @brief Получить число миль
     * @return число миль
     */
    int get_m() const;
    /**
     * @brief Перевести из футов в мили
     */
    void ft_in_m();
    /**
     * @brief Перевести из футов в ярды
     */
    void yd_in_ft();
private:
    int ft;
    int yd;
    int m;
};

#endif // CONVERT_CLASS_H
