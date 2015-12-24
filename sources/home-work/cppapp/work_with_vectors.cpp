#include "work_with_vectors.h"
#include <iostream>
#include "vectors.h"

void work_with_vectors::demonstration() const
{
    addition();
    subtraction();
    scalar_product();
    multiply();
    module();
    just_exception();
}

void work_with_vectors::addition() const
{
    int x1,y1,x2,y2;
    cout << "Введите координаты векторов." << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    my_vector vec1(x1,y1), vec2(x2,y2);
    vec1 += vec2;
    cout << vec1.get_x() << ' ' << vec1.get_y() << endl;
}

void work_with_vectors::subtraction() const
{
    int x1,y1,x2,y2;
    cout << "Введите координаты векторов." << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    my_vector vec1(x1,y1), vec2(x2,y2);
    vec1 -= vec2;
    cout << vec1.get_x() << ' ' << vec1.get_y() << endl;
}

void work_with_vectors::scalar_product() const
{
    int x1,y1,x2,y2,result;
    cout << "Введите координаты векторов." << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    my_vector vec1(x1,y1), vec2(x2,y2);
    result = vec1.scalar_product(vec2);
    cout << result << endl;
}

void work_with_vectors::multiply() const
{
    int x1,y1,number;
    cout << "Введите координаты вектора и число." << endl;
    cin >> x1 >> y1 >> number;
    my_vector vec1(x1,y1);
    vec1 *= number;
    cout << vec1.get_x() << ' ' << vec1.get_y() << endl;
}

void work_with_vectors::module() const
{
    int x1,y1;
    double result;
    cout << "Введите координаты вектора." << endl;
    cin >> x1 >> y1;
    my_vector vec1(x1,y1);
    result = vec1.module();
    cout << result << endl;
}

void work_with_vectors::just_exception() const
{
    int x1,y1;
    cout << "Введите координаты вектора." << endl;
    cin >> x1 >> y1;
    my_vector vec1(x1,y1);
    try{
        vec1.just_exception();
    }
    catch(TestException& e){
        cout << e.get_error() << endl;
    }
}
