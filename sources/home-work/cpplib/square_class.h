#ifndef SQUARE_CLASS_H
#define SQUARE_CLASS_H


class square_class
{
public:
    square_class(int);
    ~square_class();
    /// это нарушает инкапсуляцию
    int** get_two_dim();
    int get_n();
        /// это нарушает инкапсуляцию
    void set_n(int);
    /// это нарушает инкапсуляцию
    void set_two_dim(int**);
    int check_latin_square();

    /// один статический метод
    void set_member_two_dim(int, int, int);
private:
    int n;
    int** two_dim;
};

#endif // SQUARE_CLASS_H
