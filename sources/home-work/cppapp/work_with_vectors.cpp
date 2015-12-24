#include <iostream>
#include "vectors.h"
#include "addition.h"
#include "subtraction.h"
#include "module.h"
#include "multiply.h"
#include "scalar_product.h"

using namespace std;

void work_with_vectors(){
    int choice;
    cin >> choice;
    my_vector vec1(2,2);
    switch (choice){
        case 1:
            addition();
        break;
        case 2:
            subtraction();
        break;
        case 3:
            try{
                vec1.just_exception();
            }
            catch(TestException& e){
                cout << e.get_error() << endl;
            }
        break;
        case 4:
            scalar_product();
        break;
        case 5:
            multiply();
        break;
        case 6:
            module();
        break;
    }
}
