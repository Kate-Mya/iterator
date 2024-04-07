#pragma once
#include "Iterator.h"
#include "EXT.h"

class IteratorEXT : public Iterator<MyCluster>
{
private:
    EXT* ext;
    unsigned int Count;
    unsigned int Cursor;
public:
    IteratorEXT(EXT* fsItem) : ext(fsItem), Count(fsItem->ClusterCount()), Cursor(0) {}

    void First() override { Cursor = 0; }

    void Next() override { Cursor++; }

    bool IsDone() const override { return (Cursor >= Count); }
    MyCluster GetCurrent();
};