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
    }
    void operator +=(const my_vector);
    void operator -=(const my_vector);
    int scalar_product(const my_vector) const;
    void operator *=(const int);
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

