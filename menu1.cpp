#include "menu1.h"


void Menu::introMenu()
{
    char quit;
    std::cout << "Hello, please enter Y/y to enter audio file manipulation \n or enter N/n to exit the program." << std::endl;
    std::cin >> quit;
    if(quit == 'y' || quit == 'Y') 
    {
        setFileName();
    } 
    if(quit == 'n' || quit == 'N') 
    {
        exit(1);
    }
    if(std::cin.fail())
    {
        std::cout << "this is not the character y/Y or n/N \n please enter the right character" << std::endl;
    }
}

void:: Menu::setFileName() //sets file name, calls scanfile to see if its a real file. 
{
        std::string newFile;

        std::cout << "please enter the name of the audio file you would like manipulated" << std::endl;
        while (1 == 1)
    {
        std::cin >> newFile;


        if(newFile.length() < 4)
        {
            error("you have not inputed any type of file format \nPlease try again or enter exit to quit\n");
        } else if(!(newFile.substr(newFile.length()-4) == ".wav")) //implement a try catch here.
        {
            error("you have not inputed any type of file format\nPlease try again or enter exit to quit\n");
        }
        if((newFile.substr(newFile.length()-4) == ".wav")) //implement a try catch here.
        {
           break;
        }
    }
        fileName = newFile; 

        Wav orginalFile;

        orginalFile.readFile(fileName);
        printMeta();
}

void Menu::error(std::string errorName) //displays error message 
{

    std::cout << "ERROR: " << errorName << std:: endl; 
    std::cin >> errorName;
    if(errorName == "exit")
    exit(1);

}

void Menu::printMeta()
{
    
    //std::cout << wavF << std::endl; // file name goes here
    std::cout <<  "print meta 1: " << waveHeader.riff_header[0] << waveHeader.riff_header[1] << waveHeader.riff_header[2] << waveHeader.riff_header[3] << std::endl;
    std::cout <<  "print meta 2: " << waveHeader.wav_size << std::endl;
    std::cout <<  "print meta 3: " << waveHeader.num_channels << std::endl;
    
}

