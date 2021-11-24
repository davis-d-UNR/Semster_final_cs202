#include "wav.h"
#include "normalization.h"
#include "echos.h"
#include "gainadjustment.h"
#include "processor.h"

void Wav::readFile(const std::string &fileName) { 
    std::ifstream file("/home/davisd/cs202/Semster_final_cs202/piano.wav",std::ios::binary | std::ios::in); 
    if(file.is_open()){ 
        file.read((char*)&waveHeader, sizeof(wav_header)); 
        buffer = new unsigned char[waveHeader.data_bytes]; 
        file.read((char*)buffer, waveHeader.data_bytes); 
        file.close(); 
        writeStruct(buffer);
    } 
} 

void Wav::writeStruct(unsigned char* toStruct)
{
    toStruct[0] >> waveHeader.riff_header[0];
    toStruct[1] >> waveHeader.riff_header[1];
    toStruct[2] >> waveHeader.riff_header[2];
    toStruct[3] >> waveHeader.riff_header[3];

    //std::cout << "1 " << waveHeader.riff_header[0] << waveHeader.riff_header[1] << waveHeader.riff_header[2] << waveHeader.riff_header[3] << std::endl;

    toStruct[4] >> waveHeader.wav_size;

   // std::cout << "2 " << waveHeader.wav_size << std::endl;

    toStruct[5] >> waveHeader.wav_header[0];
    toStruct[6] >> waveHeader.wav_header[1];
    toStruct[7] >> waveHeader.wav_header[2];
    toStruct[8] >> waveHeader.wav_header[3];

    // std::cout << "3 " << waveHeader.wav_header[0] << waveHeader.wav_header[1] << waveHeader.wav_header[2] << waveHeader.wav_header[3] << std::endl;

    toStruct[9] >> waveHeader.fmt_header[0];
    toStruct[10] >> waveHeader.fmt_header[1];
    toStruct[11] >> waveHeader.fmt_header[2];
    toStruct[12] >> waveHeader.fmt_header[3];

   // std:: cout << "4 " << waveHeader.fmt_header[0] << waveHeader.fmt_header[1] << waveHeader.fmt_header[2] << waveHeader.fmt_header[3] << std::endl;

    toStruct[13] >> waveHeader.fmt_chunck_size;

   // std::cout << "5 " << waveHeader.fmt_chunck_size << std::endl;

    toStruct[14] >> waveHeader.audio_format;

   // std::cout << "6 " << waveHeader.audio_format << std::endl;

    toStruct[15] >> waveHeader.num_channels;

    //std::cout << "7 "<< waveHeader.num_channels << std::endl;

    toStruct[16] >> waveHeader.sample_rate;

   // std::cout << "8 " << waveHeader.sample_rate << std::endl;

    toStruct[17] >> waveHeader.byte_rate;

   // std::cout << "9 " << waveHeader.byte_rate << std::endl;

    toStruct[18] >> waveHeader.sample_alignment;
    
  //  std::cout << "10 " << waveHeader.sample_alignment << std::endl;

    toStruct[19] >> waveHeader.bit_depth;
    
   // std::cout << "11 " << waveHeader.bit_depth << std::endl;

    toStruct[20] >> waveHeader.data_header[0];
    toStruct[21] >> waveHeader.data_header[1];
    toStruct[22] >> waveHeader.data_header[2];
    toStruct[23] >> waveHeader.data_header[3];
    
 //   std:: cout << "12 " << waveHeader.data_header[0] << waveHeader.data_header[1] << waveHeader.data_header[2] << waveHeader.data_header[3] << std::endl;

    toStruct[24] >> waveHeader.data_bytes;
    
  //  std::cout << "13 " << waveHeader.data_bytes << std::endl;
}

void Wav::printMeta(const std::string &filename)
{
//filename, smaple rate, bits per sample, stereo or mono.
std::cout << "the file name is: "<< filename << std::endl;
std::cout << "the sample rate is: " << waveHeader.sample_rate << std::endl;
std::cout << "the bits per sample is: " << waveHeader.byte_rate << std:: endl;
std::cout << "the file has a ";
    if(waveHeader.num_channels == 1)
    {
        std::cout << "mono signal" << std::endl;
    }
    if(waveHeader.num_channels > 1)
    {
        std::cout << " stereo signal" << std::endl;
    }
}

void Wav::writeFile(int effect, int amount)
{
    if(effect == 1)
    { /*
        Normalization normalObject;
        normalObject.processeBuffer(buffer, sizeof(waveHeader));
        */
    } 
    else if(effect == 2)
    {
    //Echo echoObject;
    } 
    else if(effect == 3)
    { 
   // GainAdjustment GAobject;
    }
           
}