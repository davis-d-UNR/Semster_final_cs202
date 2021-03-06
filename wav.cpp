#include "wav.h"
#include "processor.h"

void Wav::readFile(const std::string &fileName) { 
    std::ifstream file("/home/davisd/cs202/Semster_final_cs202/piano2 copy.wav",std::ios::binary | std::ios::in); 
    if(file.is_open()){ 
        file.read((char*)&waveHeader, sizeof(wav_header)); 
        buffer = new unsigned char[waveHeader.data_bytes]; 
        file.read((char*)buffer, waveHeader.data_bytes); 
        file.close(); 
        writeStruct(buffer);
        printMeta(fileName);
    } 
} 

void Wav::writeStruct(unsigned char* toStruct)
{
    toStruct[0] >> waveHeader.riff_header[0];
    toStruct[1] >> waveHeader.riff_header[1];
    toStruct[2] >> waveHeader.riff_header[2];
    toStruct[3] >> waveHeader.riff_header[3];
    toStruct[4] >> waveHeader.wav_size;
    toStruct[5] >> waveHeader.wav_header[0];
    toStruct[6] >> waveHeader.wav_header[1];
    toStruct[7] >> waveHeader.wav_header[2];
    toStruct[8] >> waveHeader.wav_header[3];
    toStruct[9] >> waveHeader.fmt_header[0];
    toStruct[10] >> waveHeader.fmt_header[1];
    toStruct[11] >> waveHeader.fmt_header[2];
    toStruct[12] >> waveHeader.fmt_header[3];
    toStruct[13] >> waveHeader.fmt_chunck_size;
    toStruct[14] >> waveHeader.audio_format;
    toStruct[15] >> waveHeader.num_channels;
    toStruct[16] >> waveHeader.sample_rate;
    toStruct[17] >> waveHeader.byte_rate;
    toStruct[18] >> waveHeader.sample_alignment;
    toStruct[19] >> waveHeader.bit_depth;
    toStruct[20] >> waveHeader.data_header[0];
    toStruct[21] >> waveHeader.data_header[1];
    toStruct[22] >> waveHeader.data_header[2];
    toStruct[23] >> waveHeader.data_header[3];
    toStruct[24] >> waveHeader.data_bytes;
}

void Wav::printMeta(const std::string &filename)
{
std::cout << std::endl;
std::cout << "the file name is: "<< filename << std::endl;
std::cout << "the sample rate is: " << waveHeader.sample_rate << std::endl;
std::cout << "the bits per sample is: " << waveHeader.bit_depth << std:: endl;
std::cout << "the file has a " ;
    if(waveHeader.num_channels == 1)
    {
        std::cout << "mono signal" << std::endl << std::endl;
    }
    if(waveHeader.num_channels > 1)
    {
        std::cout << " stereo signal" << std::endl << std::endl;
    }
}

void Wav::writeFile(int effect, int amount)
{

    switch(waveHeader.bit_depth){

        case 8:
            Boundaries.max = 255;
            Boundaries.mid = 128;
            Boundaries.min = 0;
            break;

        case 16:
            Boundaries.max = 32767;
            Boundaries.mid = 0;
            Boundaries.min = -32767;
            break;
        default:
            break;
    }



    if(effect == 1)
    { 
        Normalization normalObject;
        buffer = normalObject.processeBuffer(buffer, sizeof(waveHeader),amount, Boundaries.mid);
        saveFile(buffer);        
    } 
    else if(effect == 2)
    {
        Echo echoObject;
        buffer = echoObject.processeBuffer(buffer, sizeof(waveHeader),amount, Boundaries.mid);
        saveFile(buffer);
    } 
    else if(effect == 3)
    { 
        GainAdjustment GAobject;
        buffer = GAobject.processeBuffer(buffer, sizeof(waveHeader),amount, Boundaries.mid);
        saveFile(buffer);
    }
           
}

void Wav::saveFile(unsigned char * buffer)
{
    std::cout << "savefile" << std::endl;
    std::fstream save("/home/davisd/cs202/Semster_final_cs202/piano copy.wav", std::ios::binary | std::ios::out);   
    std::ifstream file("/home/davisd/cs202/Semster_final_cs202/piano2 copy.wav",std::ios::binary | std::ios::in); 
    
    save.write((char*)&waveHeader, sizeof(waveHeader));
    int i = 0;
    for(i; i < sizeof(file) - sizeof(waveHeader); i++)
    {
        save.write((char*)&buffer[i], sizeof(short int));
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
}                                        
