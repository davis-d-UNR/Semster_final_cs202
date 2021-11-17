#include "wav.h"

void Wav::readFile(const std::string &fileName) { 
    std::ifstream file(fileName,std::ios::binary | std::ios::in); 
    if(file.is_open()){ 
        file.read((char*)&waveHeader, sizeof(wav_header)); 
        buffer = new unsigned char[waveHeader.data_bytes]; 
        file.read((char*)buffer, waveHeader.data_bytes); 
        file.close(); 
    } 
} 

void Wav::writeFile(const std::string &filename){


    
}


waveHeader.sample_rate[] = toStruct[];
waveHeader.byte_rate[] = toStruct[];
waveHeader.sample_alignment[] = toStruct[];
waveHeader.bit_depth[] = toStruct[];


waveHeader.data_header[0] = toStruct[];
waveHeader.data_header[1] = toStruct[];
waveHeader.data_header[2] = toStruct[];
waveHeader.data_header[3] = toStruct[];


waveHeader.sample_rate[] = toStruct[];
waveHeader.data_bytes[] = toStruct[];

