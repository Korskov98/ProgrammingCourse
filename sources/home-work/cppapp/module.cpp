#include <iostream>
#include "vectors.h"

using namespace std;

void module(){
    int x1,y1;
    cout << "Введите координаты вектора." << endl;
    cin >> x1 >> y1;
    my_vector vec1(x1,y1);
    double result_module;
    result_module = vec1.module();
    cout << result_module << endl;
}


