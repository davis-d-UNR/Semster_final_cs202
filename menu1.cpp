#include "menu1.h"

void Menu::print()
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
}

void:: Menu::setFileName() //sets file name, calls scanfile to see if its a real file. 
{
        std::string newFile;

        std::cout << "please enter the name of the audio file you would like manipulated" << std::endl;
        std::cin >> newFile;
        if(std::cin.fail()) //implement a try catch here.
            {
                error("you have not imputed any type of file format");
            }
        file_name = newFile; 
        // here call the scan file class and test the file if it a .wav file.
}

void Menu::error(std::string error_name) //displays error message 
{
    std::cout << "ERROR " << error_name << std:: endl; 
}
//getting undefined refernce error when complying "g++ menu1.cpp", dont know why though. the .h file complies fine. 