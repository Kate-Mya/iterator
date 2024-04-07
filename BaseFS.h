#include "windows.h"
#include "MyCluster.h"
#pragma once
class FS
{
protected:
	HANDLE fileHandler = NULL;
	unsigned int clusterSize = { 0 };
	unsigned int clusterCount = { 0 };
	virtual bool ReadClusterSize();
public:
	bool Init(LPCWSTR);
	MyCluster ReadCluster(unsigned int);
	unsigned int ClusterSize() { return clusterSize; };
	unsigned int ClusterCount() const { return clusterCount; };
	virtual ~FS();
};