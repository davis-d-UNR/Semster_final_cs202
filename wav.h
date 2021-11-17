#include <fstream>
#include <string>
#include "wavHeader.h"

#include <iostream>

class Wav : public Menu
{
    private:
    unsigned char* buffer;
public: 
    
void readFile(const std::string &);
void writeStruct(unsigned char*);
void writeFile (const std::string &);
};