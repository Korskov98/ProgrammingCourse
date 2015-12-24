#include <iostream>
#include "vectors.h"

using namespace std;

void scalar_product(){
    int x1,y1,x2,y2;
    cout << "Введите координаты векторов." << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    my_vector vec1(x1,y1),vec2(x2,y2);
    double result_scalar_product;
    result_scalar_product = vec1.scalar_product(vec2);
    cout << result_scalar_product << endl;
}



