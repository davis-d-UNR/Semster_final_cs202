#include <cstddef>
#pragma once

class processor {

    public: 
<<<<<<< HEAD
    virtual void processeBuffer(unsigned char* buffer, size_t bufferSize, int scale, int mid) = 0;
=======
    virtual void processeBuffer(unsigned char* buffer, size_t bufferSize, int scale) = 0;
    virtual void SaveFile() = 0;
>>>>>>> 1999aa99d1eed340acb0e85e5d25c597b5281190
};
