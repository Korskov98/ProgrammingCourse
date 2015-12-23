#ifndef CHECK_CLASS_H
#define CHECK_CLASS_H


class check_class
{
public:
    check_class();
    check_class(int,int,int);
    ~check_class();
    int check_triangles();
    void set_a(int);
    void set_b(int);
    void set_c(int);
    int get_a();
    int get_b();
    int get_c();
private:
    int a;
    int b;
    int c;
};

#endif // CHECK_CLASS_H
