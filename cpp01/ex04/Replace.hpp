#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

class Replace
{
private:
    std::string s1;
    std::string s2;
    std::string filename;

public:
    Replace(std::string filename, std::string s1, std::string s2);
    ~Replace();

public:
    void setS1(std::string s1);
    std::string getS1() const;
    void setS2(std::string s2);
    std::string getS2() const;
    void setFilename(std::string filename);
    std::string getFilename() const;
};

#endif