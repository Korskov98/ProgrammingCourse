#include <iostream>
#include "vectors.h"

using namespace std;

void work_with_vectors(){
    int choice;
    cin >> choice;
    int x1,x2,y1,y2;
    vector vec1,vec2;
    switch (choice){
        case 1:
            cout << "Введите координаты двух векторов." << endl;
            cin >> x1 >> y1 >> x2 >> y2;
            vec1.set_x(x1);
            vec1.set_y(y1);
            vec2.set_x(x2);
            vec2.set_y(y2);
            vec1.addition(vec2);
            cout << vec1.get_x() << ' ' << vec1.get_y() << endl;
        break;
        case 2:
            cout << "Введите координаты двух векторов." << endl;
            cin >> x1 >> y1 >> x2 >> y2;
            vec1.set_x(x1);
            vec1.set_y(y1);
            vec2.set_x(x2);
            vec2.set_y(y2);
            vec1.subtraction(vec2);
            cout << vec1.get_x() << ' ' << vec1.get_y() << endl;
        break;
        case 3:
            cout << "Введите координаты двух векторов." << endl;
            cin >> x1 >> y1 >> x2 >> y2;
            vec1.set_x(x1);
            vec1.set_y(y1);
            vec2.set_x(x2);
            vec2.set_y(y2);
            vec1.copy(vec2);
            cout << vec1.get_x() << ' ' << vec1.get_y() << endl;
        break;
        case 4:
            int result;
            cout << "Введите координаты двух векторов." << endl;
            cin >> x1 >> y1 >> x2 >> y2;
            vec1.set_x(x1);
            vec1.set_y(y1);
            vec2.set_x(x2);
            vec2.set_y(y2);
            result = vec1.scalar_product(vec2);
            cout << result << endl;
        break;
        case 5:
            int number;
            cout << "Введите координаты вектора." << endl;
            cin >> x1 >> y1 >> number;
            vec1.set_x(x1);
            vec1.set_y(y1);
            vec1.multiply(number);
            cout << vec1.get_x() << ' ' << vec1.get_y() << endl;
        break;
        case 6:
            double result_module;
            cout << "Введите координаты вектора." << endl;
            cin >> x1 >> y1;
            vec1.set_x(x1);
            vec1.set_y(y1);
            result_module = vec1.module();
            cout << result_module << endl;
        break;
    }
}
