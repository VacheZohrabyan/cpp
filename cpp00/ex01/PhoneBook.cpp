#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{

}

PhoneBook::PhoneBook(size_t contact_size)
{
	contact_size = contact_size;
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::Add(Contact contact)
{
	if (contact_size == 8)
	{
		int i = 1;
		for (; i < 8; ++i)
		{
			contact_array[i - 1] = contact_array[i];
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
		std::cout << value << "|";
	}
	else
	{
		std::cout << std::setfill(' ') << std::setw(10) << value;
		std::cout << "|";
	}
}

void print_colum(Contact* contact, int size)
{
	int i = 0;
	while (i < size)
	{
		std::cout << std::setfill(' ') << std::setw(10) << i << "|";
		print_text(contact[i].get_first_name());
		print_text(contact[i].get_last_name());
		print_text(contact[i].get_nick_name());
		std::cout << std::endl;
		++i;
	}
	std::cout << std::endl;
}

void print_colum_name()
{
	print_text("index");
	print_text("first name");
	print_text("last name");
	print_text("nick name");
	std::cout << std::endl;
}

void print_contact(Contact contact)
{
	print_text(contact.get_first_name());
	print_text(contact.get_last_name());
	print_text(contact.get_nick_name());
	print_text(contact.get_phone_number());
	print_text(contact.get_darkest_secret());
}

void PhoneBook::Search(PhoneBook phoneBook)
{
	int index;
	print_colum_name();
	print_colum(phoneBook.contact_array, phoneBook.contact_size);
	std::cout << "Enter index: ";
	if (!(std::cin >> index))
	{
		std::cout << "Invalid index: \n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max());
	}
	else if (index > 0 && index <= phoneBook.contact_size)
	{
		print_contact(phoneBook.contact_array[index - 1]);
	}
}