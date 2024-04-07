#pragma once
#include <iostream>
#include "windows.h"
using namespace std;

class MyCluster
{
private:
	unsigned int clusterNum;
	BYTE* content;
public:
	BYTE* GetContent() { return content; };
	unsigned int GetNum() const { return clusterNum; };
	MyCluster(BYTE* data, unsigned int num);
	~MyCluster();
};