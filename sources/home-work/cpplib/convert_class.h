#ifndef CONVERT_CLASS_H
#define CONVERT_CLASS_H

class imperial_system
{
public:
    imperial_system(int arg_ft = 0) : ft(arg_ft), yd(0), m(0){
    }
    void set_ft(const int);
    void set_yd(const int);
    void set_m(const int);
    int get_ft() const;
    int get_yd() const;
    int get_m() const;
    void ft_in_m();
    void yd_in_ft();
private:
    int ft;
    int yd;
    int m;
};

#endif // CONVERT_CLASS_H
