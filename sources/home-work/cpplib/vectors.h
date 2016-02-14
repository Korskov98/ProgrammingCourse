#ifndef VECTOR
#define VECTOR

#include <exception>
#include <string>

using namespace std;

class TestException : public exception{
public:
    string get_error() const{
        return "Тестовая ошибка.";
    }
};

/**
  @brief Работа с векторами

  На вход программе подаётся две координаты вектора и далее с ним можно делать арифмитические действия.
  */

class my_vector
{
public:
    /**
     * @brief Конструктор
     * @param arg_x координата по оси x
     * @param arg_y координата по оси y
     */
    my_vector(int arg_x = 0, int arg_y = 0) : x(arg_x), y(arg_y){
    }
    /**
     * @brief Сложение
     * @param my_vector вектор, который складывается с данным
     */
    void operator +=(const my_vector);
    /**
     * @brief Вычетание
     * @param my_vector вектор, который вычетается из данного
     */
    void operator -=(const my_vector);
    /**
     * @brief Скалярное произведение
     * @param my_vector вектор, который скалярно умножается с данным
     */
    int scalar_product(const my_vector) const;
    /**
     * @brief Умножение
     */
    void operator *=(const int);
    /**
     * @brief Модуль
     * @return модуль вектора
     */
    double module() const;
    /**
     * @brief Получить координату по оси x
     * @return координата по оси x
     */
    int get_x() const;
    /**
     * @brief Получить координату по оси y
     * @return координата по оси y
     */
    int get_y() const;
    /**
     * @brief Установить значение поля x, равное координате по оси x
     */
    void set_x(int);
    /**
     * @brief Установить значение поля y, равное координате по оси y
     */
    void set_y(int);
    void just_exception() const;
private:
    int x;
    int y;
};

#endif // VECTOR

