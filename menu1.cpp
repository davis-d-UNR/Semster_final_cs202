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
}

void Menu::error(std::string errorName) //displays error message 
{

    std::cout << "ERROR: " << errorName << std:: endl; 
    std::cin >> errorName;
    if(errorName == "exit")
    exit(1);

}
//getting undefined refernce error when complying "g++ menu1.cpp", dont know why though. the .h file complies fine. 

void Menu::printMeta()
{
    /*
    //std::cout << wavF << std::endl; // file name goes here
    std::cout << wavFile.riff_header[0] << wavFile.riff_header[1] << wavFile.riff_header[2] << wavFile.riff_header[3] << std::endl;
    std::cout << wavFile.wav_size << std::endl;
    std::cout << wavFile.num_channels << std::endl;
    */
}

