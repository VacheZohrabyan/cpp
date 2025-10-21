#include "Replace.hpp"

std::string find_word(std::string str, std::string s1, std::string s2)
{
	size_t start;
	start = 0;
	while ((start = str.find(s1, start)) != std::string::npos)
	{
		str.erase(start, s1.length());
		str.insert(start, s2);
		start += s2.length();
	}
	return str;
}

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
		s1_adding += find_word(temp, replace.getS1(), replace.getS2());
		s1_adding += "\n";
	}
	my_file.close();

	std::ofstream out_file(replace.getFilename().c_str(), std::ios::trunc);
	if (!out_file.is_open())
	{
		std::cout << replace.getFilename() << " is don't open" << std::endl;
		return ;
	}
	out_file << s1_adding;
	out_file.close();
}

int main()
{
	Replace replace("file.txt", " ", "hello");
	Replace_file(replace);
}