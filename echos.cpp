#include "echos.h"

void Echo::processeBuffer(unsigned char* buffer, size_t bufferSize, int scale)
{
  int gain = 2;
  int delay = 1;
  unsigned char* outputBuffer;
  for(int i = 0; i < bufferSize; i++){
      if(i < delay){
        outputBuffer[i] = (buffer[i] + gain * outputBuffer[i - delay]);
      } else {
        outputBuffer[i] = buffer[i];
      }
  };
}