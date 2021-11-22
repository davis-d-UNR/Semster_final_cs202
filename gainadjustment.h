#include "processor.h"
#include "wavHeader.h"
#include <iostream>

class GainAdjustment : public processor{
public:
void buffer() override;

};