#pragma once

class processor {

    public: 
    virtual void processeBuffer(char* buffer, size_t bufferSize) = 0;
};
