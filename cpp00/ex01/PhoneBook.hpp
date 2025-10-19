#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"
#include <iomanip>
#include <sstream>
#include <limits>
class PhoneBook
{
private:
	Contact contact_array[8];
	size_t contact_size;

public:
	PhoneBook();
	PhoneBook(size_t contact_size);
	~PhoneBook();

public:
	void Add(Contact contact);
	void Search(PhoneBook phoneBook);
};

#endif