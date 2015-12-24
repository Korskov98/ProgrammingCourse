#ifndef CHECK_CLASS_H
#define CHECK_CLASS_H

enum types_of_triangles {incorrectly, possible, isosceles, equilateral, impossible};

class triangles
{
public:
    triangles(int arg_a = 0,int arg_b = 0,int arg_c = 0) : a(arg_a), b(arg_b), c(arg_c){
    }
    types_of_triangles check_triangles() const;
    int get_a() const;
    int get_b() const;
    int get_c() const;
private:
    int a;
    int b;
    int c;
};

#endif // CHECK_CLASS_H
