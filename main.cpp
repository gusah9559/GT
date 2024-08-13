#include <iostream>
#include "Algo/algorithm.h"
#include "ViewerModule/viewer.h"

using namespace std;

int main(void){
    cout << "Program Start!!" << endl;
    // call algorithm
    if(algorithm()) cout << "algorithm Function call Success" << endl;

    createBlackScreenWindow();
    return 0;
}

