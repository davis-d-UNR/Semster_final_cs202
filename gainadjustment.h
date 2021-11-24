#include "processor.h"
#include "wavHeader.h"
#include <iostream>

class GainAdjustment : public processor{
public:
void processeBuffer(unsigned char* buffer, size_t bufferSize) override;

};