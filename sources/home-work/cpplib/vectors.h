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

class my_vector
{
public:
    my_vector(int arg_x = 0, int arg_y = 0) : x(arg_x), y(arg_y){
        x = arg_x;
        y = arg_y;
    }
    void operator +=(my_vector);
    void operator -=(my_vector);
    int scalar_product(my_vector) const;
    /// Тоже перегрузить
    void multiply(int);
    double module() const;
    int get_x() const;
    int get_y() const;
    void set_x(int);
    void set_y(int);
    void just_exception() const;
private:
    int x;
    int y;
};

#endif // VECTOR

