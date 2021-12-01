#include "processor.h"
#include "wavHeader.h"
#include <iostream>
#include <cstddef>

class Echo : public processor{
public:
unsigned char * processeBuffer(unsigned char* buffer, size_t bufferSize, int scale, int mid) override;

};