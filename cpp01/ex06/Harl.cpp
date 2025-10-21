#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::debug()
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.\n"
        "You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\n"
        "I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    enum {DEBUG, INFO, WARNING, ERROR};
    std::string levels1[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*fptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int i = 0;
    while (i < 4)
    {
        if (levels1[i] == level)
            break;
        ++i;
    }
    switch (i)
    {
        case DEBUG:
        {
            while (i < 4)
            {
                (this->*fptr[i])();
                ++i;
            }
            break;
        }
        case INFO:
        {
            while (i < 4)
            {
                (this->*fptr[i])();
                ++i;
            }
            break;
        }
        case WARNING:
        {
            while (i < 4)
            {
                (this->*fptr[i])();
                ++i;
            }
            break;
        }
        case ERROR:
        {
            while (i < 4)
            {
                (this->*fptr[i])();
                ++i;
            }
            break;
        }
        
    }
}