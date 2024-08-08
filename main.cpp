#include <iostream>
#include "Algo/algorithm.h"
#include "windows/window.h"

using namespace std;

int main(void){
    cout << "Program Start!!" << endl;
    // call algorithm
    if(algorithm()) cout << "algorithm Function call Success" << endl;

    createBlackScreenWindow();
    return 0;
}

