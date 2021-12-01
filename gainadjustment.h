#include "processor.h"
#include "wavHeader.h"
#include <iostream>
#include <fstream>
#include <cstddef>
#include <vector>

class GainAdjustment : public processor{
public:
void processeBuffer(unsigned char* buffer, size_t bufferSize, int scale, int mid) override;
void SaveFile() override;
};