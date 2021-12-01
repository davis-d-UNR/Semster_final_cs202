#include <cstddef>
#pragma once

class processor {

    public: 
<<<<<<< HEAD
    unsigned char* buffer2;
    virtual void processeBuffer(unsigned char* buffer, size_t bufferSize, int scale) = 0;
    virtual unsigned char * SaveFile() = 0;
=======
    virtual void processeBuffer(unsigned char* buffer, size_t bufferSize, int scale, int mid) = 0;
    virtual void SaveFile() = 0;
>>>>>>> ffd4dedccf2894b8123e0670b636e1946a16d557
};
