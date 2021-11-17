#include <fstream>
#include <string>
#include "wavHeader.h"

#include <iostream>

class Wav
{
    private:
    
    unsigned char* buffer;
public: 
     wav_header waveHeader;
void readFile(const std::string &);
void writeStruct(unsigned char*);
void writeFile (const std::string &);
void printMeta();
};