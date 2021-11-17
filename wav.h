#include <fstream>
#include <string>
#include "wavHeader.h"
#include <iostream>

class Wav
{
    wav_header waveHeader;
    unsigned char* buffer;
public: 
void readFile(const std::string &);
void writeStruct(unsigned char*);
void writeFile (const std::string &);
};