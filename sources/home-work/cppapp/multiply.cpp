#include <iostream>
#include "vectors.h"

using namespace std;

void multiply(){
    int x1,y1,number;
    cout << "Введите координаты вектора и число." << endl;
    cin >> x1 >> y1 >> number;
    my_vector vec1(x1,y1);
    vec1.multiply(number);
    cout << vec1.get_x() << ' ' << vec1.get_y() << endl;
}



