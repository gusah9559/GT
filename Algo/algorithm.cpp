#include <iostream>
#include "algorithm.h"
#include "moduleA/moduleA.h"
#include "moduleB/moduleB.h"

using namespace std;

bool algorithm(void){
    cout << "algorithm Start" << endl;

    cout << "Call several algorithm module" << endl;

    moduleA();

    moduleB();

    int k = 4 / 0;
    return 1;
}