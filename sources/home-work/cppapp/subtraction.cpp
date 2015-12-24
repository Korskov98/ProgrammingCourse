#include <iostream>
#include "vectors.h"

using namespace std;

void subtraction(){
    int x1,x2,y1,y2;
    cout << "Введите координаты двух векторов." << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    my_vector vec1(x1,y1),vec2(x2,y2);
    vec1 -= vec2;
    cout << vec1.get_x() << ' ' << vec1.get_y() << endl;
}

