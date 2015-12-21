#ifndef VECTOR
#define VECTOR

class vector
{
public:
    vector();
    vector(int, int);
    ~vector();
    void addition(vector);
    void subtraction(vector);
    void copy(vector);
    int scalar_product(vector);
    void multiply(int);
    double module();
    int get_x();
    int get_y();
    void set_x(int);
    void set_y(int);
private:
    int x;
    int y;
};

#endif // VECTOR

