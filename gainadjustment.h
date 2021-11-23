#include "processor.h"
#include "wavHeader.h"
#include <iostream>

class GainAdjustment : public processor{
public:
void processeBuffer(char* buffer, size_t bufferSize) override;

};