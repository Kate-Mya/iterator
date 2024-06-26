#pragma once
#include "BaseFS.h"
#include "Iterator.h"
#include <iostream>
#include <cstdint>
#include <cstring>
class EXT :
	public FS
{
private:
#pragma pack(push, 1)
	typedef struct {
		uint8_t jumpInstruction[3];
		BYTE oemID[8];
		uint16_t bytesPerSector;
		uint8_t sectorsPerCluster;
		BYTE pass[26];
		uint64_t countSectors;
	} BootRecord;
#pragma pack(pop)
protected:
	bool ReadClusterSize();
};