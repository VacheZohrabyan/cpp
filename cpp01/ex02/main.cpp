#include <iostream>

int main()
{
    std::string message = "HI THIS IS BRAIN";
    std::string* stringPTR = &message;
    std::string &stringREF = message;

    std::cout << "message ptr = " << &message << std::endl;
    std::cout << "stringPTR ptr = " << stringPTR << std::endl;
    std::cout << "stringREF ptr = " << &stringREF << std::endl;

    std::cout << "message = " << message << std::endl;
    std::cout << "stringPTR = " << *stringPTR << std::endl; 
    std::cout << "stringREF = " << stringREF << std::endl;
}