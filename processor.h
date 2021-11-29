#include <cstddef>
#pragma once

class processor {

    public: 
    virtual void processeBuffer(unsigned char* buffer, size_t bufferSize, int scale) = 0;
    virtual void SaveFile() = 0;
};
