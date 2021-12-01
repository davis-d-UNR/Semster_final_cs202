#include "menu1.h"


void Menu::introMenu()
{
    char quit;
    std::cout << "Hello, please enter Y/y to enter audio file manipulation \n or enter N/n to exit the program." << std::endl;
    do {
        std::cin >> quit;
        if(quit == 'y' || quit == 'Y') 
        {
            setFileName();
            break;
        } else if(quit == 'n' || quit == 'N') 
        {
            exit(1);
        } else
        {
            std::cout << "this is not the character y/Y or n/N \n please enter the right character" << std::endl;
        }
    }while(1 == 1);
}

void Menu::setFileName() //sets file name, calls scanfile to see if its a real file. 
{
        std::string newFile;

        std::cout << "please enter the name of the audio file you would like manipulated" << std::endl;
        while (1 == 1)
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cin >> newFile;


        if(newFile.length() < 4)
        {
            std::cout << "you have not inputed any type of file format \nPlease try again\n";
        } else if(!(newFile.substr(newFile.length()-4) == ".wav")) 
        {
            std::cout<< "you have not inputed any type of file format\nPlease try again\n";
        }else if((newFile.substr(newFile.length()-4) == ".wav"))
        {
           break;
        }
    }
        fileName = newFile; 



        orginalFile.readFile(fileName);
       // orginalFile.printMeta(fileName);
}

void Menu::processMenu()
{

    int process;
    int scale;

    std::cout << "Please enter a number for a process to manipulate your file: " << std::endl;

    std::cout << "1 - Normalization " << "2 - Echo " << "3 - Gain Adjustment " << std::endl;
do {
    std::cin >> process;

            if(process == 1){      
                scale = 0;
                orginalFile.writeFile(1, scale);
            } 
            else if(process == 2){ 
                scale = 0;
                orginalFile.writeFile(2,scale);
            } 
            else if(process == 3){ 
                scale = askValue();
                orginalFile.writeFile(3,scale);     
            }
            else{
         std::cout << "Please enter either 1, 2, or 3." << std::endl;
       }
    }while((process > 3 && process < 1) || std::cin.fail());
}

int Menu::askValue(){
    int scale;
    do{
    std::cin.clear();
    std::cin.ignore(1000,'\n');
    std::cout << "how much do you want to scale this effect" << std::endl;
    std::cin >> scale;

    } 
    while (std::cin.fail());
    

    return scale;
}
