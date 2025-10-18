#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::Add(Contact contact)
{
	if (contact_size == 8)
	{
		int i = 1;
		while (i < 8)
		{
			contact_array[i - 1] = contact_array[i];
			++i;
		}
		contact_array[i] = contact;
	}
	else
	{
		contact_array[contact_size] = contact;
		++contact_size;
	}
}

void print_text(std::string value)
{
	if (value.length() > 10)
	{
		value.resize(9);
		value.append(".");
	}
	else
	{
		std::cout << value;
		std::cout << std::setw(10 - value.length()) << std::endl;
	}
}

void print_colum(Contact* contact, int size)
{
	int i = 0;
	while (i < size)
	{
		std::cout << i;
		print_text(contact[i].get_first_name());
		print_text(contact[i].get_last_name());
		print_text(contact[i].get_nick_name());
		++i;
	}
}

void PhoneBook::Search(PhoneBook phoneBook)
{
	print_colum(phoneBook.contact_array, phoneBook.contact_size);
}