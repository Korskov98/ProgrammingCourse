#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
    cout << "Ведите значения векторов." << endl;
    vector proba,proba1;
    cin >> proba.x;
    cin >> proba.y;
    cin >> proba1.x;
    cin >> proba1.y;
    proba.addition(proba1);
    cout << proba.x << " " << proba.y << endl;
    proba1.subtraction(proba);
    cout << proba1.x << " " << proba1.y << endl;
    double mod = proba.module();
    cout << mod << endl;
    proba.copy(proba1);
    cout << proba.x << " " << proba.y << endl;
    int scalar = proba1.scalar_product(proba);
    cout << scalar << endl;
    return 0;
}

