#include "normalization.h"
#include <fstream>
#include <utility>
#include <algorithm>



void Normalization::processeBuffer(unsigned char* buffer, size_t bufferSize, int scale) 
{
     unsigned char* outputBuffer;
     float value;

     for(int i = 0; i < bufferSize; i++){
          value = scale * (1 / *max_element(buffer, buffer + bufferSize));


     }
}

