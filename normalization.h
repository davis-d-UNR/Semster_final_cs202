#include "processor.h"
#include "wavHeader.h"
#include <iostream>

class Normalization : public processor{
public:
void processeBuffer(unsigned char* buffer, size_t bufferSize) override;
};