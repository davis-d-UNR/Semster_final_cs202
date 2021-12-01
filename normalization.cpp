#include "normalization.h"
#include <fstream>
#include <utility>
#include <algorithm>



unsigned char * Normalization::processeBuffer(unsigned char* buffer, size_t bufferSize, int scale, int mid) 
{
     int maxValue = 0;

     for(int i = 0; i < bufferSize; i++){
          if(buffer[maxValue] < buffer[i]){
               maxValue = i;
          }
     }
     for(int i = 0; i < bufferSize; i++){
          float scaleF = (Boundaries.max - mid) / buffer[maxValue] - mid;
          buffer[i] = ((buffer[i] - mid) * scaleF) + mid;
     }
     return buffer;
}

