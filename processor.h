#pragma once

class processor {

    public: 
    virtual void processeBuffer(unsigned char* buffer, size_t bufferSize) = 0;
};
