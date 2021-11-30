#include <cstddef>
#pragma once

class processor {

    public: 
    unsigned char* buffer2;
    virtual void processeBuffer(unsigned char* buffer, size_t bufferSize, int scale) = 0;
    virtual unsigned char * SaveFile() = 0;
};
