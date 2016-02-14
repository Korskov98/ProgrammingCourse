#ifndef SQUARE_CLASS_H
#define SQUARE_CLASS_H

#include <exception>
#include <vector>

using namespace std;

class WrongAdressException : public exception
{
private:
    int i;
    int j;
public:
    WrongAdressException(int i, int j) : i(i), j(j){}
    int get_i() const
    {
        return i;
    }
    int get_j() const
    {
        return j;
    }
};

/**
  @brief Латинский квадрат

  На вход программе подаётся матрица. Она проверяет является ли она латинским квадратом.
  */

class latin_square
{
public:
    /**
     * @brief Конструктор
     * @param n колличество строк и столбцов
     */
    latin_square(int arg_n = 0) : n(arg_n){
        n = arg_n;
        two_dim.resize(n);
        for (int i = 0; i < n; ++i){
            two_dim[i].resize(n);
        }
    }
    /**
     * @brief Получить число столбцов и строк
     * @return число столбцов и строк
     */
    int get_n() const;
    /**
     * @brief Проверка матрицы на соответствие латинскому квадрату
     * @return результат проверки
     */
    bool check_latin_square() const;
    /**
     * @brief Задать элемент матрицы
     */
    void set_member_two_dim(const int, const int, const int);
private:
    int n;
    vector<vector<int> > two_dim;
};

#endif // SQUARE_CLASS_H
