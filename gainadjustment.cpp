#include "gainadjustment.h"

void GainAdjustment::processeBuffer(unsigned char* buffer, size_t bufferSize ,int scale, int mid)
{
    for(int x = 0; x < bufferSize; x++)
    {
        buffer[x] *= scale;
    }
}

void GainAdjustment::SaveFile()
{


}