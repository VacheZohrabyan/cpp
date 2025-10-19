#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"
#include <iomanip>
#include <limits>

class PhoneBook
{
private:
	Contact contact_array[8];
	int contact_size;

public:
	PhoneBook();
	~PhoneBook();

public:
	int get_contact_size();
	void Add(Contact contact);
	void Search();
};

#endif