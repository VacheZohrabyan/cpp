#include <iostream>

void print_message(char* argv)
{
    while (*argv)
    {
        if (isalpha(*argv))
            std::cout << (char)std::toupper(*argv);
        else
            std::cout << *argv;
        argv++;
    }
}

int main(int argc, char** argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        ++argv;
        while (*argv)
        {
            print_message(*argv);
            ++argv;
        }
        std::cout << std::endl;
    }
}