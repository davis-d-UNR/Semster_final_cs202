#include "processor.h"
#include "wavHeader.h"
#include <iostream>
#include <cstddef>

class GainAdjustment : public processor{
public:
void processeBuffer(unsigned char* buffer, size_t bufferSize, int scale) override;
void SaveFile() override;
};