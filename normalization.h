#include "processor.h"
#include "wavHeader.h"
#include <iostream>

class Normalization : public processor{

public:
void processeBuffer(char* buffer, size_t bufferSize) override;

};