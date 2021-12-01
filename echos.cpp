#include "echos.h"

unsigned char * Echo::processeBuffer(unsigned char* buffer, size_t bufferSize, int scale, int mid)
{


  float gain  = 0.5;
  int delay = 1;
  unsigned char* outputBuffer;
  
  for(int i = 0; i < 5; i++){
      if(i > delay){
        
        
        outputBuffer[i] = (buffer[i] - mid + gain * outputBuffer[(i +1)  - delay] - mid) + mid;
      } else {
        outputBuffer[i] = buffer[i];
      }
     
  };
  return outputBuffer;
}
/*
    save.write((char*)&waveHeader, sizeof(waveHeader));
    short int temp;                                                 
    short int ch[100000], ch2[100000];                          
    int i,j;                                                        
        for(i=0; i<100000; i++)                                   
                ch2[i] = 0;                                         
    while(!file.eof())                                             
    {                                                               
        for(i=0; i<100000 && !file.eof(); i++)                   
        file.read((char*)&ch[i], sizeof(short int));               
        for(i=0; i<100000; i++)                                   
                {                                                   
                    temp  = ch[i];                                  
                    ch[i]+=ch2[i];                                  
                    save.write((char*)&ch[i], sizeof(short int));
                    ch2[i] = temp;                                  
                }                           
                */       