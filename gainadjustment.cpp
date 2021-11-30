#include "gainadjustment.h"

void GainAdjustment::processeBuffer(unsigned char* newBuffer, size_t bufferSize ,int scale)
{
    std::cout << "GA before effect" << std::endl;
    /*
    for(int x = 0; x < bufferSize-1; x++)
    {
       newBuffer[x] = 128;
    }
    */
    std::cout << "GA after" << std::endl;
    
    buffer2 = newBuffer;
    
}

unsigned char * GainAdjustment::SaveFile()
{ 
    std::cout << "GA save" << std::endl;
    return buffer2;
   /*
    saving.write((char*)buffer, waveHeader.data_bytes); 
    */
    
}


/*
    std::ifstream file("/home/davisd/cs202/Semster_final_cs202/piano.wav",std::ios::binary | std::ios::in); 
    if(file.is_open()){ 
        file.read((char*)&waveHeader, sizeof(wav_header)); 
        buffer = new unsigned char[waveHeader.data_bytes]; 
        file.read((char*)buffer, waveHeader.data_bytes); 
        file.close(); 
        */