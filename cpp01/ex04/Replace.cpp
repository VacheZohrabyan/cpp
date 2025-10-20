#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
    this->filename = filename;
    this->s1 = s1;
    this->s2 = s2;
}

Replace::~Replace()
{

}

void Replace::setS1(std::string s1)
{
    this->s1 = s1;    
}

std::string Replace::getS1() const
{
    return s1;
}

void Replace::setS2(std::string s2)
{
    this->s2 = s2;
}

std::string Replace::getS2() const
{
    return s2;
}

void Replace::setFilename(std::string filename)
{
    this->filename = filename;    
}

std::string Replace::getFilename() const
{
    return filename;
}