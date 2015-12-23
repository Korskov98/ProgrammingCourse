#ifndef REMOVAL_CLASS_H
#define REMOVAL_CLASS_H


class removal_class
{
public:
    removal_class();
    removal_class(int);
    ~removal_class();
    void set_number(int);
    int get_number();
    int removal();
private:
    int number;
};

#endif // REMOVAL_CLASS_H
