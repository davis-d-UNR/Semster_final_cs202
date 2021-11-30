#include "processor.h"
#include "wavHeader.h"
#include <iostream>
#include <fstream>
#include <cstddef>
#include <vector>

class GainAdjustment : public processor{
public:
//Wav save;
wav_header saveHeader;
unsigned char * buffer;
void processeBuffer(unsigned char* buffer, size_t bufferSize, int scale) override;
unsigned char * SaveFile() override;
};