#include <iostream>
#include "Algo/algorithm.h"
#include "windows/window.h"

using namespace std;

int main(void){
    cout << "Program Start!!" << endl;
    // call algorithm
    if(algorithm()) cout << "algorithm Function call Success" << endl;

   if (!initializeOpenGL()) {
        return -1;
    }

    renderLoop();
    cleanup();

    return 0;
}

