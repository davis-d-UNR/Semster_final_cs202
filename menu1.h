#include <iostream>
#include <cstddef>
#include <string>
#include <typeinfo>

#include "wav.h"
#include "wavHeader.h"
#include "processor.h"


class Menu
{
    std::string fileName;

public:

    Wav orginalFile;
    
    void introMenu();//prints the first instance of the menu.
    void quitMenu();//will ask the user to quit or to manipulate the file again
    void setFileName(); // user will enter the file name and then call scanfile functions to test and write in metadata

    void processMenu();//user will pick effect to use on audio file will, calls set effects with each effect. Switch statement in .cpp. 
    void setEffect(); // user depending on the effct will select parameters for each effect, could use a template here.
                        // will call effects class and process from there. 

    void askForChange();// will ask user if the file is changed to their liking, if not the changes will not be saved.

    void error(std::string); // outputs error message, and asks if the user will want to continue. calls quit menu.
                            //might be good to try making it a global to catch all error messages dont know whether to make it a virtual
                            // or make it a interface.       
    
    int askValue();
};