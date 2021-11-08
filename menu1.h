#include <iostream>

class Menu
{
    std::string file_name;
public:
    void print();//prints the first instance of the menu.
    void quitMenu();//will ask the user to quit or to manipulate the file again
    void setFileName(); // user will enter the file name and then call another function in the other file not yet specificied.

    void chooseEffect();//user will pick effect to use on audio file;
    void setEffect(); // user depending on the effct will select parameters for each effect, could use a template here.

    void error(std::string); // outputs error message, and asks if the user will want to continue. calls quit menu. 
};