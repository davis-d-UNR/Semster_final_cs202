#include "processor.h"
#include "wavHeader.h"
#include <iostream>


class Echo : public processor{
public:
void buffer() override;

};