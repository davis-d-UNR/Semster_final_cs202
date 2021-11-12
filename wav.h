#include <fstream>
#include <string>
#include "wavHeader.h"

class Wav
{
    wav_header waveHeader;
    unsigned char* buffer;
public: 
void readFile(const std::string &);
void writeFile (const std::string &);
};