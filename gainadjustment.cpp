#include "gainadjustment.h"

unsigned char * GainAdjustment::processeBuffer(unsigned char* buffer, size_t bufferSize ,int scale, int mid)
{
    std::cout << "GA before effect" << std::endl;
    
    for(int x = 0; x < bufferSize-1; x++)
    {
      buffer[x] = mid;
    }
    
    std::cout << "GA after" << std::endl;
    return buffer;
   // buffer2 = newBuffer;
    
}

/*
    std::ifstream file("/home/davisd/cs202/Semster_final_cs202/piano.wav",std::ios::binary | std::ios::in); 
    if(file.is_open()){ 
        file.read((char*)&waveHeader, sizeof(wav_header)); 
        buffer = new unsigned char[waveHeader.data_bytes]; 
        file.read((char*)buffer, waveHeader.data_bytes); 
        file.close(); 
        */