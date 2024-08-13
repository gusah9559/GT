#include <iostream>
#include "main.h"
#include "Algo/algorithm.h"
#include "ViewerModule/viewer.h"


using namespace std;

int main(void){
    cout << "Program Start!!" << endl;
    // call algorithm
    if(algorithm()) cout << "algorithm Function call Success" << endl;

    createBlackScreenWindow();
#if RUN_MODE == DEBUG
    cout << "Debug MODE" << endl;
#endif
    return 0;
}

