#include "readpcl.h"
#include "../Customtype.h"
#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

using namespace std;

void testPCL(vector<Point3D> &points)
{
    pcl::PointCloud<pcl::PointXYZ> cloud;

    cloud.width = 5;
    cloud.height = 1;
    cloud.is_dense = false;
    cloud.points.resize(cloud.width * cloud.height);

    points.clear();

    for (auto &p : cloud.points)
    {
        p.x = 1024 * rand() / (RAND_MAX + 1.0f);
        p.y = 1024 * rand() / (RAND_MAX + 1.0f);
        p.z = 1024 * rand() / (RAND_MAX + 1.0f);

        points.emplace_back(p.x, p.y, p.z);
        // cout << p.x << p.y << p.z << endl;
    }
    cout << "test function using PCL" << endl;
}