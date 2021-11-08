#include <iostream>

class Menu
{
    std::string file_name;
public:
    void print();//prints the first instance of the menu.
    void quitMenu();//will ask the user to quit or to manipulate the file again
    void setFileName(std::string);
    void enterFile(); // user will enter the file name and then call another function in the other file not yet specificied.
};