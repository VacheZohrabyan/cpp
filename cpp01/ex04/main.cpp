#include "Replace.hpp"

void Replace_file(Replace replace)
{
    std::fstream my_file;
    my_file.open(replace.getFilename().c_str(), std::ios::in | std::ios::out | std::ios::app);
    if (!my_file.is_open())
    {
        std::cout << replace.getFilename() << " is don't open" << std::endl;
        return ;
    }
    std::string s1_adding;
    std::string temp;
    while (std::getline(my_file, temp))
    {
        s1_adding += temp;
        s1_adding += "\n";
    }
    replace.setS1(s1_adding);
}

int main()
{
    Replace replace("file.txt", "", "");
    Replace_file(replace);
}