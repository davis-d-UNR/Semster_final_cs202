#include "processor.h"
#include "wavHeader.h"
#include <iostream>
#include <cstddef>

class Echo : public processor{
public:
void processeBuffer(unsigned char* buffer, size_t bufferSize) override;

};