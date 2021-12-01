#include <cstddef>
#pragma once

class processor {

    public: 
    virtual unsigned char * processeBuffer(unsigned char* buffer, size_t bufferSize, int scale, int mid) = 0;
};
