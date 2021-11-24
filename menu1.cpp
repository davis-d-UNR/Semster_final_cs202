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

void Menu::setFileName() //sets file name, calls scanfile to see if its a real file. 
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



        orginalFile.readFile(fileName);
}

void Menu::error(std::string errorName) //displays error message 
{
    std::cout << "ERROR: " << errorName << std:: endl; 
    std::cin >> errorName;
    if(errorName == "exit")
    exit(1);
}

void Menu::processMenu()
{

    int process;
    int scale;

    std::cout << "Please enter a number for a process to manipulate your file: " << std::endl;

    std::cout << "1 - Normalization " << "2 - Echo " << "3 - Gain Adjustment " << std::endl;
 // put input loop here.
    std::cin >> process;

            if(process == 1){      
                scale = askValue();
                orginalFile.writeFile(1, scale);
            } 
            else if(process == 2){ 
                scale = askValue();
                orginalFile.writeFile(2,scale);
            } 
            else if(process == 3){ 
                scale = askValue();
                orginalFile.writeFile(3,scale);        
            }
            else{
         std::cout << "Please enter either 1, 2, or 3." << std::endl;
       }
    
    /*
           if(process == 1){ 
              Normalization sound;
             sound.buffer(); 
           } else if(process == 2){ 
              Echo sound;
             sound.buffer(); 
           } else if(process == 3){ 
              GainAdjustment sound;
             sound.buffer(); 
           } else{
             std::cout << "Please enter either 1, 2, or 3." << std::endl;
           }
           */
}

int Menu::askValue(){
    int scale;
    std::cout << "how much do you want to scale this effect" << std::endl;
    std::cin >> scale;
    return scale;
}
