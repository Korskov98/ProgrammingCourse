#ifndef CHECK_CLASS_H
#define CHECK_CLASS_H


/// Пе
class check_class
{
public:
    check_class(int arg_a = 0,int arg_b = 0,int arg_c = 0) : a(arg_a), b(arg_b), c(arg_c){
    }
    /// Пусть возвращает еnum
    int check_triangles() const;
    int get_a() const;
    int get_b() const;
    int get_c() const;
private:
    int a;
    int b;
    int c;
};

#endif // CHECK_CLASS_H
