#include "echos.h"

void Echo::processeBuffer(unsigned char* buffer, size_t bufferSize, int scale, int mid)
{
  float gain  = 0.5;
  int delay = 1;
  unsigned char* outputBuffer;
  for(int i = 0; i < bufferSize; i++){
      if(i > delay){
        outputBuffer[i] = (buffer[i] - mid + gain * outputBuffer[i - delay] - mid) + mid;
      } else {
        outputBuffer[i] = buffer[i];
      }
  };
}
void Echo:: SaveFile()
{

  
}