#ifndef VECTOR
#define VECTOR

class vectors
{
public:
    vectors();
    vectors(int, int);
    ~vectors();
    void addition(vectors);
    void subtraction(vectors);
    void copy(vectors);
    int scalar_product(vectors);
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

