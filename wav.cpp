#include "wav.h"

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

    std::cout << "1 " << waveHeader.riff_header[0] << waveHeader.riff_header[1] << waveHeader.riff_header[2] << waveHeader.riff_header[3] << std::endl;

    toStruct[4] >> waveHeader.wav_size;

    std::cout << "2 " << waveHeader.wav_size << std::endl;

    toStruct[5] >> waveHeader.wav_header[0];
    toStruct[6] >> waveHeader.wav_header[1];
    toStruct[7] >> waveHeader.wav_header[2];
    toStruct[8] >> waveHeader.wav_header[3];

     std::cout << "3 " << waveHeader.wav_header[0] << waveHeader.wav_header[1] << waveHeader.wav_header[2] << waveHeader.wav_header[3] << std::endl;

    toStruct[9] >> waveHeader.fmt_header[0];
    toStruct[10] >> waveHeader.fmt_header[1];
    toStruct[11] >> waveHeader.fmt_header[2];
    toStruct[12] >> waveHeader.fmt_header[3];

    std:: cout << "4 " << waveHeader.fmt_header[0] << waveHeader.fmt_header[1] << waveHeader.fmt_header[2] << waveHeader.fmt_header[3] << std::endl;

    toStruct[13] >> waveHeader.fmt_chunck_size;

    std::cout << "5 " << waveHeader.fmt_chunck_size << std::endl;

    toStruct[14] >> waveHeader.audio_format;

    std::cout << "6 " << waveHeader.audio_format << std::endl;

    toStruct[15] >> waveHeader.num_channels;

    std::cout << "7 "<< waveHeader.num_channels << std::endl;

    toStruct[16] >> waveHeader.sample_rate;

    std::cout << "8 " << waveHeader.sample_rate << std::endl;

    toStruct[17] >> waveHeader.byte_rate;

    std::cout << "9 " << waveHeader.byte_rate << std::endl;

    toStruct[18] >> waveHeader.sample_alignment;
    
    std::cout << "10 " << waveHeader.sample_alignment << std::endl;

    toStruct[19] >> waveHeader.bit_depth;
    
}




<<<<<<< HEAD
=======
}

<<<<<<< HEAD
>>>>>>> e5d902c09374dac340361a5a774154e9a21740bf
=======
void Wav::printMeta()
{
//filename, smaple rate, bits per sample, stereo or mono.


}
>>>>>>> 454ac74ee68b046faa57b5a8541ad5315b144d4b
