#include <fstream>
#include <string>
#include <iostream>
#include "wavHeader.h"
#include "processor.h"
#include <cstddef>
#include "boundaries.h"


class Wav
{
    private:
    
    unsigned char* buffer;
public: 
    wav_header waveHeader;
void readFile(const std::string &);
void writeStruct(unsigned char*);
void writeFile (int, int);
void printMeta(const std::string &);
    boundaries Boundaries;
};