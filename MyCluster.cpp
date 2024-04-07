#include "MyCluster.h"
#include <iostream>
using namespace std;

MyCluster::MyCluster(BYTE* data, unsigned int num)
{
    clusterNum = num;
    content = data;
}

MyCluster::~MyCluster()
{
    delete[] content;
}