#ifndef WAV_HEADER_H_
#define WAV_HEADER_H_

typedef struct wav_header {

char riff_header[4];

int wav_size;

char wav_header[4];

char fmt_header[4];

int fmt_chunck_size;

short audio_format;

short num_channels;

int sample_rate; 

int byte_rate;

short sample_alignment;

short bit_depth;

char data_header[4];

int data_bytes;

}wav_header;

#endif
