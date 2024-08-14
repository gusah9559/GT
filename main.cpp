#include <iostream>
#include "main.h"
#include "Algo/algorithm.h"
#include "ViewerModule/viewer.h"
#include "ParserModule/readpcl.h"
#include <vector>
#include "Customtype.h"

using namespace std;

int main(void){
    cout << "Program Start!!" << endl;
    // call algorithm
    if(algorithm()) cout << "algorithm Function call Success" << endl;

    vector<Point3D> points;

    testPCL(points);

    for(size_t v = 0; v < points.size(); v++) 
        cout << points[v].x << points[v].y << points[v].z << endl;

    createBlackScreenWindow(points);
#if RUN_MODE == DEBUG
    cout << "Debug MODE" << endl;
#endif
    
    return 0;
}

