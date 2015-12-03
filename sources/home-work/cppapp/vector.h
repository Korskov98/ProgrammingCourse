#ifndef VECTOR_H
#define VECTOR_H

class vector
{
public:
    vector();
    ~vector();
    void addition(const vector);
    void subtraction(const vector);
    void copy(const vector);
    int scalar_product(const vector) const;
    void multiply(const int);
    double module() const;
    int x;
    int y;
};

#endif // VECTOR_H
