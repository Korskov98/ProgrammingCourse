#ifndef CHECK_CLASS_H
#define CHECK_CLASS_H


class check_class
{
public:
    check_class(int arg_a = 0,int arg_b = 0,int arg_c = 0) : a(arg_a), b(arg_b), c(arg_c){
        a = arg_a;
        b = arg_b;
        c = arg_c;
    }
    int check_triangles() const;
    void set_a(int);
    void set_b(int);
    void set_c(int);
    int get_a() const;
    int get_b() const;
    int get_c() const;
private:
    int a;
    int b;
    int c;
};

#endif // CHECK_CLASS_H
