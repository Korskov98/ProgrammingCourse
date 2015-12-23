#ifndef CONVERT_CLASS_H
#define CONVERT_CLASS_H


class convert_class
{
public:
    convert_class();
    convert_class(int);
    ~convert_class();
    void set_ft(int);
    void set_yd(int);
    void set_m(int);
    int get_ft();
    int get_yd();
    int get_m();
    void ft_in_m();
    void yd_in_ft();
private:
    int ft;
    int yd;
    int m;
};

#endif // CONVERT_CLASS_H
