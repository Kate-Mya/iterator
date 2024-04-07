#include "IteratorEXT.h"
#include "MyCluster.h"

MyCluster IteratorEXT::GetCurrent()
{
    return ext->ReadCluster(Cursor);
}
